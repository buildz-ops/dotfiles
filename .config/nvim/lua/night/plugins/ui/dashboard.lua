return {
    {
        "goolord/alpha-nvim",
        event = "VimEnter",
        enabled = true,
        init = false,
        opts = function()
            local alpha = require("alpha")
            local dashboard = require("alpha.themes.dashboard")

            local function generateRandomBlocks(rows, cols)
                local result = {}
                for i = 1, rows do
                    local line = ""
                    for j = 1, cols do
                        if math.random() < 0.5 then
                            line = line .. "⬤ "
                        else
                            line = line .. "  "
                        end
                    end
                    table.insert(result, line)
                end
                return result
            end

            local rows = 15
            local cols = 20

            math.randomseed(os.time())
            local function pick_color()
                local colors = { "String", "Identifier", "Keyword", "Number" }
                return colors[math.random(#colors)]
            end

            dashboard.section.header.val = generateRandomBlocks(rows, cols)
            dashboard.section.header.opts.hl = pick_color()

            dashboard.section.buttons.val = {
                dashboard.button("rf", "   Recent", "<cmd> Telescope oldfiles <cr>"),
                dashboard.button("gc", "   Git commits", "<cmd>:Telescope git_commits<cr>"),
                dashboard.button("gO", "   Git branches", "<cmd>:Telescope git_branches<cr>"),
                dashboard.button("oc", " 🖿  Open config", "<cmd>tabnew $MYVIMRC | tcd %:p:h<cr>"),
            }
            for _, button in ipairs(dashboard.section.buttons.val) do
                button.opts.hl = "Comment"
                button.opts.hl_shortcut = ""
                button.opts.position = "center"
                button.opts.width = 25
            end
            dashboard.section.header.opts.hl = ""
            dashboard.section.footer.opts.hl = "Keyword"
            dashboard.opts.layout[1].val = 8
            return dashboard
        end,

        config = function(_, dashboard)
            if vim.o.filetype == "lazy" then
                vim.cmd.close()
                vim.api.nvim_create_autocmd("User", {
                    once = true,
                    pattern = "AlphaReady",
                    callback = function()
                        require("lazy").show()
                    end,
                })
            end

            require("alpha").setup(dashboard.opts)

            vim.api.nvim_create_autocmd("User", {
                once = true,
                pattern = "LazyVimStarted",
                callback = function()
                    local current_hour = tonumber(os.date("%H"))
                    local greeting
                    local greeting_2

                    if current_hour < 5 then
                        greeting = "    Good night!"
                    elseif current_hour < 12 then
                        greeting = "  󰼰 Good morning!"
                    elseif current_hour < 17 then
                        greeting = "    Good afternoon!"
                    elseif current_hour < 20 then
                        greeting = "  󰖝  Good evening!"
                    else
                        greeting = "  󰖔  Good night!"
                    end

                    local stats = require("lazy").stats()
                    local ms = math.floor(stats.startuptime * 100) / 100

                    local fg_color = tostring(math.random(0, 12))
                    greeting_2 = "\n\n⬤ Lazy-loaded " .. stats.loaded .. " plugins in " .. ms .. "ms ⬤\n"

                    dashboard.section.footer.val = greeting_2

                    pcall(vim.cmd.AlphaRedraw)
                end,
            })
        end,
    },
}

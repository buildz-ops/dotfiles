# Ensure commands are run only in interactive sessions
if status is-interactive
    # Remove the default Fish welcome message
    function fish_greeting
        # Suppress the default Fish greeting
    end

    # Display system information with Catnap on terminal startup
    catnap

    # Configure Oh My Posh prompt with the 1_shell theme
    oh-my-posh init fish --config /home/ayoub/.cache/oh-my-posh/themes/bubblesextra.omp.json | source
end

    # Zoxide
    zoxide init fish | source

    # Aliases
    # Converted aliases for Fish

function ll
    ls -alF
end

function la
    ls -A
end

function l
    ls -CF
end

function pacup
    sudo pacman -Syu
end

function pacins
    sudo pacman -S
end

function pacrem
    sudo pacman -Rns
end

function pacclean
    sudo pacman -Sc
end

function grep
    command grep --color=auto
end

function gs
    git status
end

function ga
    git add $argv
end

function gc
    git commit $argv
end

function gp
    git push $argv
end

function matrix
    unimatrix -c blue
end

function ls
    eza --icons=always --color=always
end

function lsadv
    eza -alh --icons=always --color=always
end
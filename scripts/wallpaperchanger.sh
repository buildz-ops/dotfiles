#!/bin/fish

# #!/bin/bash (if using bash and not zsh. Type "echo $0" into command line to see what kind you're using. Mine says /usr/bin/zsh

#### Change "~/Downloads/wallpapers/" to the folder/directory you keep you wallpaper images.

set wall $(find ~/Pictures/wallpapers/ -type f -name "*.jpg" -o -name "*.png" -o -name "*.gif" | shuf -n 1)

swww kill
swww init

# Picks background wallpaper
swww img $wall

# generate color scheme
wal -c
wal -i $wall

# Kill Waybar
killall waybar

# Restart Waybar
waybar &

# Enable this (by removing the # next to pywalfox update) if you use firefox AND downloaded the pywalfox extension and installed repository.
pywalfox update

# Update discord theme file to match pywal color scheme
cp -f $HOME/.cache/wal/colors-discord.css $HOME/.var/app/dev.vencord.Vesktop/config/vesktop/themes/colors-discord.css
# Deletes the sww cache
rm -rf $HOME/.cache/swww

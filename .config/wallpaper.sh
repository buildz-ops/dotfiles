#!/bin/bash
# Randomly select a wallpaper from the folder
WALLPAPER=$(find ~/Wallpapers -type f | shuf -n 1)

# Apply the wallpaper with swww
hyprpaper img "$WALLPAPER"

# Generate colors with pywal
wal -i "$WALLPAPER"

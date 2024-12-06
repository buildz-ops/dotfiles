#!/bin/bash
# Start OpenRGB, load the all-white profile, and exit after 5 seconds
openrgb --profile /home/ayoub/.config/OpenRGB/all-white.orp
sleep 5
killall openrgb

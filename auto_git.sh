#!/bin/bash

cd /home/matda-co/Documents/CoCo/42_printf

git add .

git commit -m "✨ auto commit ✨ on: $(date +"%Y-%m-%d %H:%M:%S")"

git push origin HEAD

echo "Pushed changes at $(date)" >> /home/matda-co/Documents/CoCo/42_printf/auto_git.log


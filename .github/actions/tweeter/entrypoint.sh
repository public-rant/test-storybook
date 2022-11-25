#!/bin/sh

days=1 # $GITHUB_INPUT TODO
echo "schedule="$(calcurse -D . --format-todo '  %n\n' --days $days -Q --format-recur-apt '  %n\n' --format-event '  %n\n' | yq .[]) >> $GITHUB_OUTPUT

#!/bin/sh

days=1 # $GITHUB_INPUT TODO
echo "schedule=$(calcurse -D . -Q --days $days --format-recur-event '  %n\n' --format-apt '  %n' | yq [.[]] | jq '.[] | split(" ")' | jq -s flatten)" >> $GITHUB_OUTPUT

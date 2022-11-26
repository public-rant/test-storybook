#!/bin/sh

days=1 # $GITHUB_INPUT TODO

echo "schedule=$(calcurse -D . -Q --days 2 --format-recur-event '  %n\n' --format-apt '  %n' --format-todo '  %n\n' | yq -o json [.[]] | jq '.[] | split(" ")' | jq -cs 'flatten | unique')" >> $GITHUB_OUTPUT

#!/bin/sh

days=$1

# $GITHUB_INPUT TODO
        # run: echo "matrix={\"include\":[{\"project\":\"foo\",\"config\":\"Debug\"},{\"project\":\"bar\",\"config\":\"Release\"}]}" >> $GITHUB_OUTPUT

# schedule=$(calcurse -D . -Q --days 2 --format-recur-event '  %n\n' --format-apt '  %n' --format-todo '  %n\n' \
# | yq -o json [.[]] \
# | jq '.[] | split(" ")' \
# | jq -cs 'flatten | unique')
# # | jq 'map(., { note: . })')
#
# echo "schedule=$schedule" #>> $GITHUB_OUTPUT
# format="  %n\n" # can't use becuaese invalid argument comibnation error.
  # --format-recur-event $format \
  # --format-apt $format \
  # --format-todo $format \
  # --format-recur-apt $format \
  # --format-event $format 
# | yq -o json '[.[][]]' \
# | jq -c 'map({ config: ., project: . }) | tostring') #>> $GITHUB_OUTPUT
echo "schedule=$(calcurse -D . -Q --days $days --format-event '  - %n\n' --format-recur-event '  - %n\n' | yq -o json| jq -c '[.[] | map({ config: ., project: . })[]] | tostring')" >> $GITHUB_OUTPUT

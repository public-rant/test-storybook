ts = ./node_modules/.bin/tree-sitter
test: generate
	$(ts) $@

generate:
	$(ts) $@


SECTIONS = data-structures algorithms
all: $(SECTIONS)

$(SECTIONS):
	@for item in $$(find javascript-algorithms/src/$@ -name '*.js' -not -path '*/__test__/*'); do ${MAKE} -sB $$item; done

javascript-algorithms/src/%:
	@echo --- > $$(basename $* .js).md.txt
	@echo "tags: $$(dirname $* | jq -cR 'split("/")')" >> $$(basename $* .js).md.txt
	@echo --- >> $$(basename $* .js).md.txt
	@echo "# $*" >> $$(basename $* .js).md.txt
	@rg '//' $@ -g '!*.test.js' -g '!*.md' --json | jq -rsc '.[] | select(.type == "match").data.lines.text' >> $$(basename $* .js).md.txt
	@sed 's/\/\///g' $$(basename $* .js).md.txt > $$(basename $* .js).md

clean:
	rm -rf *.md *.txt
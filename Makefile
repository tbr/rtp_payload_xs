OPEN=$(word 1, $(wildcard /usr/bin/xdg-open /usr/bin/open /bin/echo))
SOURCES?=${wildcard *.mkd}
TEXT=${SOURCES:.mkd=.txt}
HTML=${SOURCES:.mkd=.html}
XML=${SOURCES:.mkd=.xml}

text:	$(TEXT)
html:   $(HTML)
xml:    $(XML)

%.xml:	%.mkd
	kramdown-rfc2629 $< >$@.new
	mv $@.new $@

%.html: %.xml
	xml2rfc --html $<
	$(OPEN) $@

%.txt:	%.xml
	xml2rfc -P $<

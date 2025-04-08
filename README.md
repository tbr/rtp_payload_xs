# RTP Payload Format for ISO/IEC 21122 (JPEG XS)

Draft RTP payload document to update/replace RFC9134. This is a necessary revision to add support for new features introduced by the 3rd edition of JPEG XS.

## Source

The `mkd` file is the source reference used to build txt, xml, html, and pdf outputs.

## Required tools for building

- kramdown-rfc2629 (Ruby, use `gem install kramdown-rfc`)
- xml2rfc (Python, use `pip install xml2rfc`)

## Building

Run `make` on command line.

## Recovering source from XML

`sed -n '/markdown-source/,/==/p' draft-bruylants-avtcore-rtp-jpegxs-3ed.xml | tail -n +2 | base64 -d | gunzip`

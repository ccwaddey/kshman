# The OpenBSD ksh manual

This repo is just the OpenBSD ksh(1) manual, split into more
manageable sections.

There is a small program that simply prints the arguments given to it
that can be compiled with `cc -Wall -o printarcv printarcv.c`.

You may want to add `alias kls='ls | sort -t "-" -k2'` to your shell's
startup script so that you can list the sections in order.

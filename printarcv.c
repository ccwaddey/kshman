/*
 * Copyright (c) 2022 Chris Waddey <admin@hoolizen.com>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#include <libgen.h>
#include <stdio.h>
#include <string.h>

extern char **environ;

int
main(int argc, char *argv[]) {
	int i;

	printf("argc = %d:\n", argc);
	for (i = 0; i < argc; ++i)
		printf("%s\n", argv[i]);

	if (!strcmp(basename(argv[0]), "eprintarcv")) {
		printf("\nenviron:\n");
		if (environ != NULL) {
			char **curenv = environ;
			while (*curenv != NULL)
				printf("%s\n", *curenv++);
		}
	}

	return 0;
}

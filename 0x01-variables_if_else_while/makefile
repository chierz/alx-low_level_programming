CC = gcc
CFLAGS = -Wall -pedantic -Werror -Wextra -std=gnu89
SOURCES = $(wildcard *.c)
EXECUTABLES = $(SOURCES:.c=)

all: $(EXECUTABLES)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(EXECUTABLES)


CC = gcc
CFLAGS = -Wall -Wextra -I./include

all: nano-installer

nano-installer: src/main.c src/check_ncurses.c src/install.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f nano-installer

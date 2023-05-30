all: taskmanager

CC = gcc
override CFLAGS += -g -lm -Iinclude

SRCS = $(wildcard src/*.c)
HEADERS = $(wildcard include/*.h)

taskmanager: $(SRCS) $(HEADERS)
	$(CC) $(CFLAGS) $(SRCS) -o "$@"


clean:
	rm -f taskmanager.exe


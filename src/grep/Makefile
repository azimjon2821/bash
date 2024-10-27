CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = grep
SRC = grep.c
HEADERS = grep.h
$(TARGET): $(SRC) $(HEADERS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)
clean:
	rm -f $(TARGET)
.PHONY: clean
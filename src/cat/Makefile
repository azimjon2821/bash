# Compiler and flags
CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -Werror -pedantic

# Targets
TARGET = cat
SRC = cat.c
OBJ = cat.o
INCLUDES = cat.h

# Default target: Compile the program
all: $(TARGET)

# Build the object file and executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Compile the .c file into .o object file
$(OBJ): $(SRC) $(INCLUDES)
	$(CC) $(CFLAGS) -c $(SRC)

# Clean up build files
clean:
	rm -f $(OBJ) $(TARGET)

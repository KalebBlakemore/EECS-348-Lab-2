# Author: Kaleb Blakemore
# KUID: 3228599
# Date: 09/11/2026
# Lab: Lab #2
# Last modified: 09/11/2026
# Purpose: Makefile for compiling the isOdd program and cleaning artifacts

# Compiler and compilation flags
CC = gcc
CFLAGS = -Wall -c

# Name of the final executable output
TARGET = checkOdd

# Object files required to build the executable
OBJS = main.o isOdd.o

# Default rule to build the program
all: $(TARGET)

# Link object files to create the final executable
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Compile main.c into main.o
main.o: main.c isOdd.h
	$(CC) $(CFLAGS) main.c

# Compile isOdd.c into isOdd.o
isOdd.o: isOdd.c isOdd.h
	$(CC) $(CFLAGS) isOdd.c

# Clean rule to remove object files and the executable
clean:
	rm -rf *.o $(TARGET)
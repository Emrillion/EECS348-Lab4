# script to compile things

# Compiler
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

# Default target
all: footballScore temperatureConversion

footballScore: footballScore.c
	$(CC) $(CFLAGS) footballScore.c -o footballScore
	@echo "footballScore compiled"

temperatureConversion: temperatureConversion.c
	$(CC) $(CFLAGS) temperatureConversion.c -o temperatureConversion
	@echo "temperatureConversion compiled"

clean:
	rm -f footballScore 
	rm -f temperatureConversion
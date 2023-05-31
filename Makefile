CC := gcc
#CFLAGS := 
DEST := ./build/

all: recursion_binary_search.c
	mkdir -p build
	$(CC) recursion_binary_search.c -lcs50 -o $(DEST)/recursion_binary_search 
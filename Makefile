# https://raw.githubusercontent.com/nothings/stb/refs/heads/master/stb_ds.h
CC=gcc
CFLAGS=-Wall -O2 -g

all: dyn_hash_example dyn_array_example


dyn_hash_example: dyn_hash_example.c
	$(CC) $(CFLAGS) $^ -o $@

dyn_array_example: dyn_array_example.c
	$(CC) $(CFLAGS) $^ -o $@

dyn_array_poc: dyn_array_poc.c
	$(CC) $(CFLAGS) $^ -o $@


clean:
	@rm -vf dyn_hash_example 
	@rm -vf dyn_array_example
	

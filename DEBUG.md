first add -g to build flags in makefile

run debugger:
gf2 ./dyn_array_example

in debugger:
b main -> break main
run

in watch window debugger type:
(Header\*) numbers-1 -> this shows the header with count and capacity

type 'n' -> step multiple times and see header change

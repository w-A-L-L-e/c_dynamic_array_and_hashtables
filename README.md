# Dynamic arrays and hashtables in plain C

The entire dynamic array implementation is in dyn_array.h with 0 dependencies
other than malloc/realloc.
For the hashmap we used the stb libraries. But also this works with a single
header included in this repo for convenience.

## Build

First build executables using the makefile

```
$ make
```

## Examples

Run the two examples

```
$ ./dyn_array_example
0 -> 11
1 -> 12
2 -> 13
0 -> 11.000000
1 -> 12.000000
2 -> 13.000000

$ ./dyn_hash_example
hello => 23
world => 12344556
foo => 555
```

## References

For the hashmap the stb libraries we're used

- https://github.com/nothings/stb
- https://github.com/nakst/gf
- https://www.youtube.com/@Tsoding : showed this idea in one of his videos.

## Debugging with gf2

First add -g to build flags in makefile (already done here)

run debugger:

```
gf2 ./dyn_array_example
```

in debugger:

```
b main -> break main
run
```

in watch window debugger type:

```
(Header\*) numbers-1 -> this shows the header with count and capacity
```

type 'n' -> step multiple times and see header change

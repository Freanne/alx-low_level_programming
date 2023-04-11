#!/bin/bash

# Compile all .c files and create object files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create static library with object files
ar -rc liball.a *.o

# Index the library
ranlib liball.a

# Remove object files
rm *.o


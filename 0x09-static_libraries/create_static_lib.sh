#!/bin/bash
rm -f liball.a ; gcc -Wall -pedantic -Werror -Wextra -c *.c && ar -rc liball.a *.o ; if [[ $? -eq 0 ]]; then echo "liball.a created!"; fi


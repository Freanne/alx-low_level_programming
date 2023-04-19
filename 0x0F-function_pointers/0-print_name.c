#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Print a name.
 * @name : A pointer to describe the name.
 * @f : A function pointer to a function that print a name.
 *
 * Return :void.
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}

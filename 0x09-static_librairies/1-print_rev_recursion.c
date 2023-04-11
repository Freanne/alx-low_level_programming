#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s : The character to be checked.
 *
 * Return : void.
 */

void _print_rev_recursion(char *s)
{
char temp;

if (*s != '\0')
{
_print_rev_recursion(s + 1);
temp = s[0];
_putchar(temp);
}
}

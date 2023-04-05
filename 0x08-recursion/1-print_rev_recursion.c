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
int length = strlen(s), i;

for (i = 0; i < length / 2; i++)
{
char temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
}
}

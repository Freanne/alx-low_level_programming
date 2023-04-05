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

if (length <= 1)
return ;

char temp = s[0];
s[0] = s[length  - 1];
s[length - 1] = temp;


_print_rev_recursion(s + 1)
}

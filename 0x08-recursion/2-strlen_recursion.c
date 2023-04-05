#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen_recursion - The length of a string .
 * @s : The character to be printed.
 *
 * Return : The lenght of a string.
 */

int _strlen_recursion(char *s)
{
if (*s != '\0')
return (0);
else
return 1 + _strlen_recursion(s + 1);
}

#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 *@str:The string to be checked.
 *
 *
 * Return: character of s.
 */


void puts2(char *str)
{
int i, l = strlen(str);

for (i = 0; i < l; i += 2)
{
printf("%c", str[i]);
}
printf("\n");
}

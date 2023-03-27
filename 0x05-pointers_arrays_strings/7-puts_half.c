#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts_half -  prints half of a string,
 * followed by a new line.
 *@str:The string to be checked.
 *
 *
 * Return: second half of str.
 */

void puts_half(char *str)
{
int l = strlen(str);
if (l % 2 == 0)
{
int n = (strlen(str)) / 2, i;

for (i = n; i < l; i++)
{
printf("%c", str[i]);
}
printf("\n");
}
else
{
int n = (strlen(str) +  1) / 2, i;

for (i = n; i < l; i++)
{
printf("%c", str[i]);
}
printf("\n");
}
}

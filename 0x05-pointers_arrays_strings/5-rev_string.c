#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * rev_string - Reverse a string.
 *@s:The string to be checked.
 *
 *
 * Return: reverse of s.
 */


void rev_string(char *s)
{
int i;

for (i = strlen(s) - 1; i >= 0; i--)
{
printf("%c", s[i]);
}

}

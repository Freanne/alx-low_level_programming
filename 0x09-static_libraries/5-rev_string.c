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
int length = strlen(s), i;

for (i = 0; i < length / 2; i++)
{
char temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
}
}

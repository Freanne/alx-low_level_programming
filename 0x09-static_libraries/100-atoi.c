#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _atoi - ...
 * @s: char to be checked.
 *
 * Return: the value.
 */

int _atoi(char *s)
{
int result = 0;
int sign = 1;

if (*s == '-')
{
sign = -1;
s++;
}

while (*s != '\0')
{
if (*s < '0' || *s > '9')
break;

result = result * 10 + (*s - '0');
s++;
}
return (sign *result);
}

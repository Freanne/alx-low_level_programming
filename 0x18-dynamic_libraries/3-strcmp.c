#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strcmp - Compares between two strings.
 * @s1 : The string to be checked.
 * @s2 : the string to be checked.
 *
 * Return: 0.
 *
 */


int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] != '\0' || s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}

return (0);


}

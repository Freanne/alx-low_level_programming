#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * function - _islower.
 *
 * Return: 0 if c is lowercase 1 otherwise.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}


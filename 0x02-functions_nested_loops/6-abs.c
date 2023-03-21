#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
/**
 * _abs - Computes the absolute value of an integer.
 *@n: The character to be checked.
 *
 * Return: n if n is greater than 0
 * -n if n is less than 0.
 */

int _abs(int n)
{
if (n > 0)
return (n);
else
return (-n);
}

#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _pow_recursion - The value of x raised to the power of y.
 * @x : THe value to raised.
 * @y : The power.
 *
 * Return: the value of x raised to the power of y, or -1 if y is negative
 */


int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));

}

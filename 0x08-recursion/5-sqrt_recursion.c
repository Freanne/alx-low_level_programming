#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _sqrt_helper - helper function to recursively find the square root
 * @n: the number to calculate the square root of
 * @start: the starting value for the search range
 * @end: the ending value for the search range
 *
 * Return: the natural square root of n within the search range,
 * or -1 if not found
 */
int _sqrt_helper(int n, int start, int end)
{
if (start <= end)
{
int mid = (start + end) / 2;

if (mid * mid == n)
{
return (mid);
}
else if (mid * mid < n)
{
return (_sqrt_helper(n, mid + 1, end));
}
else
{
return (_sqrt_helper(n, start, mid - 1));
}
}

return (-1);
}

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root of n,
 * or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
int root = _sqrt_helper(n, 0, n);

if (n < 0)
{
return (-1);
}

if (n == 0 || n == 1)
{
return (n);
}



return (root);
}



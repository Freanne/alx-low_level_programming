#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _sqrt_recursion - Calculates the square root of a number.
 * @n: The number to calculate the square root of.
 * Return: The square root of the number.
 */
int _sqrt_recursion(int n)
{
if (n == 0 || n == 1)
return n;
else if (n < 0)
return -1;
else
return _sqrt_helper(n, 1, n);
}

/**
 * _sqrt_helper - Helper function for calculating the square root of a number.
 * @n: The number to calculate the square root of.
 * @start: The starting point for the search.
 * @end: The ending point for the search.
 * Return: The square root of the number.
 */
int _sqrt_helper(int n, int start, int end)
{
int mid = (start + end) / 2;

if (mid * mid == n || (mid * mid < n && (mid + 1) * (mid + 1) > n))
return mid;
else if (mid * mid < n)
return _sqrt_helper(n, mid + 1, end);
else
return _sqrt_helper(n, start, mid - 1);
}

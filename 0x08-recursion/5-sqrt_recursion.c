#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * sqrt_helper - helper function to find the square root recursively
 * @n: input number
 * @i: square root estimate
 *
 * Return: the natural square root of n
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 *
 * Return: the natural square root of n, -1 if n does not have
 * a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_helper(n, 1));
}


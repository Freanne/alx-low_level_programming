#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * is_prime - helper function for is_prime_number
 * @n: the integer to check
 * @i: the divisor to check n against
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime(int n, int i)
{
    /* Base cases */
if (n < 2)
return (0);
if (i == 1)
return (1);

/* Check if n is divisible by i */
if (n % i == 0)
return (0);


return (is_prime(n, i - 1));
}

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: the integer to check
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
return (is_prime(n, n - 1));
}


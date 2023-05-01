#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: the integer to check
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
    /* Check if n is less than 2 */
if (n < 2)
return (0);

    /* Check if n is 2 or 3 */
if (n == 2 || n == 3)
return (1);

    /* Check if n is divisible by 2 or 3 */
if (n % 2 == 0 || n % 3 == 0)
return (0);

    /* Check if n is divisible by any odd number greater than 3 */
for (int i = 5; i * i <= n; i += 2)
{
if (n % i == 0 || n % (i + 2) == 0)
return (0);
}

return (1);
}


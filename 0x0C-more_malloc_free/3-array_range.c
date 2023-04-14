#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range -  creates an array of integers.
 * @min: the minimum
 * @max : the maximum.
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
int *array = malloc((max - min + 1) * sizeof(int)), i;


if (min > max)
return (NULL);

if (array == NULL) {
return (NULL);
}
    
for (i = 0; i <= max - min; i++) {
array[i] = min + i;
}
    
return (array);
}

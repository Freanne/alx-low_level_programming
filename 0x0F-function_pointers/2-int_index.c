#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array :the array.
 * @size : the size of array.
 * @cmp :function pointer
 * Return : the index of the first element for which the cmp function does not return 0
 */


int int_index(int *array, int size, int (*cmp)(int))
{
size_t i;

if (size <= 0)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i])
return (i);


}

}
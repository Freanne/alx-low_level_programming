#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Linear search algorithm
 * @array: list of int pointer
 * @size: size of the list
 * @value: searched value
 * Return: a index or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, *(array + i));
			if (*(array + i) == value)
				return (i);
		}
	return (-1);
}

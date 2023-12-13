#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - print array
 * @array: the list
 * @start: index start
 * @end: index end
 * Return: None
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t j;

	printf("Searching in array: ");
	for (j = start; j < end; j++)
		printf("%d, ", *(array + j));
	printf("%d\n", *(array + end));
}

/**
 * binary_search - Binary search algorithm
 * @array: list of integer pointer
 * @size: the size of the list
 * @value: a target value
 * Return: a index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, m;

	if (array != NULL && size != 0)
	{
		l = 0;
		r = size - 1;
		print_array(array, l, r);
		while (l < r)
		{
			m = (l + r) / 2;
			if (*(array + m) < value)
			{
				l = m + 1;
				print_array(array, l, r);
			}
			else if (*(array + m) > value)
			{
				r = m - 1;
				print_array(array, l, r);
			}
			else
				return (m);
		}
	}

	return (-1);
}

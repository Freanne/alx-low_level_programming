#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
*print_dlistint - Prints all the elements of a dlistint_t
*@h: The number to be checked
*
*Return: The number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}

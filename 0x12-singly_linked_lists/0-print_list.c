#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a mist_t list.
 * @h : The pointer of the node.
 *
 * Return : The number of nodes.
 */
size_t print_list(const list_t *h)
{
size_t n = 0;
while (h != NULL)
{
	if (h->str == NULL)
		printf("[0] (nil)");
	else
		printf("[%u] %s", h->len, h->str);

n++;
}
return (n);

}

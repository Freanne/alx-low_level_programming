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
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);

h = h->next;
n++;
}
return (n);

}

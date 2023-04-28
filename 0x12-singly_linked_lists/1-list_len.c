#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - The number of element in a linked list_t.
 * @h: The pointer of list_t
 *
 * Return : The number of elements.
 */
size_t list_len(const list_t *h)
{
size_t n = 0;

while (h != NULL)
{
h = h->next;
n++;
}
return (n);
}

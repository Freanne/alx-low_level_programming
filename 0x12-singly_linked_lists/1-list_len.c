#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list.
 * @h: The pointer of list_t.
 *
 *  Return: The number of elements in the linked list.
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

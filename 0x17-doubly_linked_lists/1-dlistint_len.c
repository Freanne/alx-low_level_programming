#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * dlistint_len - Print the number of elements in a linked dlistint_t.
 * @h : the pointer of the node.
 *
 * Return: The number of elements in a linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t n = 0;

while (h)
{
h = h->next;
n++;
}

return (n);
}

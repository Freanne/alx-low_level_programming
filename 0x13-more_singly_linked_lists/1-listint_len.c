#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * listint_len - Print the number of elements in a linked listint_t.
 * @h : the pointer of the node.
 *
 * Return: The number of elements in a linked list.
 */

size_t listint_len(const listint_t *h)
{
size_t n = 0;

while (h)
{
h = h->next;
n++;
}

return (n);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a linked list.
 * @h: The pointer of the list_t to print.
 *
 * Return: The number of nodes printed.
 *         If the linked list is NULL, returns 0.
 */
size_t print_list(const list_t *h)
{
size_t n = 0;

while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);

h = h->next;
n++;
}
return (n);

}


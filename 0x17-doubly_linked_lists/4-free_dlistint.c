#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_dlistint - Free a linked list.
 * @head : The pointer of node.
 *
 * Return : void.
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *p;

while (head != NULL)
{
p = head;
head = head->next;
free(p);
}
}


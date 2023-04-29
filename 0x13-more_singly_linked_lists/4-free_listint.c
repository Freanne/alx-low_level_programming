#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint - Free a linked list.
 * @head : The pointer of node.
 *
 * Return : void.
 */

void free_listint(listint_t *head)
{
listint_t *p;

while (head != NULL)
{
p = head;
head = head->next;
free(p);
}
}

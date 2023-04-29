#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2 - Free a linked list.
 * @head : The pointer of node.
 *
 * Return : void.
 */

void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
return;

while (*head != NULL)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
*head = NULL;

}

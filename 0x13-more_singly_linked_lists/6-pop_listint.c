#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - Delete the head node of a linked list.
 * @head : The first node.
 *
 * Return: The head node's data(n), 0 if the liked is empty.
 */

int pop_listint(listint_t **head)
{
listint_t *tmp;
int n;

if (head == NULL || *head == NULL)
return (0);

tmp = *head;
*head = (*head)->next;
n = tmp->n;
free(tmp);

return (n);

}

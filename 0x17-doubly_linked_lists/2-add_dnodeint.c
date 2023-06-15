#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at beginning of a dlistint_t list.
 * @head : The pointer of node.
 * @n: Value of the number to be added.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *p;

p = malloc(sizeof(dlistint_t));

if (p == NULL)
return (NULL);

p->n = n;
p->prev = NULL;
p->next = *head;
	if (*head != NULL)
		(*head)->prev = p;
*head = p;

return (*head);

}

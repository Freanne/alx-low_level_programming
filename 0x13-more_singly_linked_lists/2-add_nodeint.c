#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at beginning of a listint_t list.
 * @head : The pointer of node.
 * @n: Vakue of the number to be added.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *p;

p = malloc(sizeof(listint_t));

if (p == NULL)
return (NULL);

p->n = n;
p->next = *head;
*head = p;

return (*head);

}

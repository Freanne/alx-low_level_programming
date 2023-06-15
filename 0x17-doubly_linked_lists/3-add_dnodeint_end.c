#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a listint_t list.
 * @head : the pointer of first node.
 * @n : value to be added.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *current;

new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
*head = new_node;
else
{
current = *head;
while (current->next != NULL)
current = current->next;

current->next = new_node;
new_node->prev = current;
}

return (new_node);
}

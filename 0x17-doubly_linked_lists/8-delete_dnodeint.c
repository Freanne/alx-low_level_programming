#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: Double pointer to the head of the list
 * @index: Index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current, *temp;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

current = *head;

if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}
for (i = 0; i < index && current != NULL; i++)
current = current->next;

if (current == NULL)
return (-1);

if (current->next == NULL)
{
current->prev->next = NULL;
free(current);
return (1);
}

temp = current->prev;
current->prev->next = current->next;
current->next->prev = temp;
free(current);

return (1);
}


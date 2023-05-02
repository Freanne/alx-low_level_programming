#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t list.
 * @head: Double pointer to the head node of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if successful, -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *tmp, *prev;

if (!head || !*head)
return (-1);

if (!index)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
return (1);
}

prev = *head;
for (i = 0; i < index - 1; i++)
{
if (!prev->next)
return (-1);

prev = prev->next;
}

tmp = prev->next;
if (!tmp)
return (-1);
prev->next = tmp->next;
free(tmp);

return (1);
}


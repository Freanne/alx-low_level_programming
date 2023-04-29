#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - The nth node of linked list.
 * @head : The pointer of the fisrts node.
 * @index : index of the value to print.
 *
 * Return: The nth node of a linked list, NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *node;
unsigned int i;

node = head;
for (i = 0; node && i < index; i++)
node = node->next;

return (node);

}

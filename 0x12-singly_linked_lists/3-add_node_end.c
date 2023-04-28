#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list
 * @head : The head pointer of node.
 * @str : the string to be added at the end.
 *
 * Return: The address of the new node,
 * or NULL if it failed to allocate memory.
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *current;
int l;

new = malloc(sizeof(list_t));
if (p == NULL)
return (NULL);

while (str[l])
l++;

new->len = l;
new->str = strdup(str);
new->next = NULL;

if (*head == NULL)
*head = new;
else
{
current = *head;
while (current->next != NULL)
	current = current->next;

current->next = new;
}
return (new);
}

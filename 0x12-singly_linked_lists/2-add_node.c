#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new at the beginning of a list_t list.
 * @head : The pointer of the list_t node.
 * @str: the string to de added.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *p;
int l = 0;

p = malloc(sizeof(list_t));
if (p == NULL)
return (NULL);

while (str[l])
l++;

p->len = l;
p->str = strdup(str);
p->next = *head;
*head = p;
return (*head);
}

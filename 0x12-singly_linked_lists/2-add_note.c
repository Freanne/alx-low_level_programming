#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new at the beginning of a list_t list.
 * @head : The pointer of the list_t node.
 * @str: the string to de added.
 *
 * Return : The adress of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
list_t **p;
while (head)
{
p = malloc(sizeof(list_t));
p->str = str;
p->next = head;
head->next = NULL;
head = p;

}
return head;


}	

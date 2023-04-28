#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - Free a linked list.
 * @head : Thpointer of node.
 *
 * Return : void.
 */

void free_list(list_t *head)
{
list_t *p;

while (head != NULL)
{
p = head;
head = head->next;
free(p->str);
free(p);
}


}

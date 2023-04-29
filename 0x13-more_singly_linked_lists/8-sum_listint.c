#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * sum_listint - Sum of all the data(n) of a linked lis.
 * @head : The first node of a linked list.
 *
 * Return: Sum of all the data(n) of linked list, 0 if list is empty.
 */

int sum_listint(listint_t *head)
{
int sum = 0;

if (head == NULL)
return (0);

while (head != NULL)
{
sum += head->n;
head = head->next;

}
return (sum);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head : the first node.
 *
 * Return: The address of node where loops start.
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow, *fast;

if (head == NULL || head->next == NULL)
return (NULL);

slow = head->next;
fast = head->next->next;

while (fast != NULL && fast->next != NULL)
{
if (slow == fast)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (slow);
}
slow = slow->next;
fast = fast->next->next;
}

return (NULL);
}


#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: A pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	const listint_t *prev[1024];
	size_t count = 0;
	size_t i;

	while (head)
	{
		current = head;
		head = head->next;

		/* Check if current node is in prev */
		for (i = 0; i < count; i++)
		{
			if (prev[i] == current)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (count);
			}
		}

		printf("[%p] %d\n", (void *)current, current->n);

		if (count < 1024)
			prev[count] = current;

		count++;
	}

	return (count);
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list
 * @h: Address of the head pointer of the list
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;

	while (*h)
	{
		if (*h <= (*h)->next)
		{
			temp = *h;
			*h = NULL;
			free(temp);
			count++;
			break;
		}
		temp = (*h)->next;
		(*h)->next = NULL;
		free(*h);
		*h = temp;
		count++;
	}

	return (count);
}


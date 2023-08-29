#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - function that frees a list.
 * @h: pointer to the first node of the list.
 *
 * Return: returns a head or NULL if failed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current = *h;
	listint_t *next_node;

	while (current != NULL)
	{
		size++;
		next_node = current->next;
		free(current);
		current = next_node;

		if (current == *h)
		{
			*h = NULL;
			break;
		}
	}

	return (size);
}

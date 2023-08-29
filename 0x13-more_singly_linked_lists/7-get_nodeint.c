#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_ *get_nodeint_at_index - function that frees a list.
 * @head: pointer to the first node of the list.
 *
 * @index: index of the node to return.
 * Return: the node we are looking for.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	while (current && i < index)
	{
		current = current->next;
		i++;
	}

	return (current);
}

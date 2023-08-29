#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_t *insert_nodeint_at_index - insert new node at a given position.
 * @head: pointer to the first node of the list.
 * @idx: the new list where the new node should be added.
 * @n: new data inserted.
 *
 * Return: returns the new node or NULL if failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		listint_t *current = *head;

		for (i = 0; current && i < idx - 1; i++)
		{
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}

		current = current->next;
	}

	if (current == NULL)
	{
		free(new_node);
	return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;
	}
	return (new_node);
}

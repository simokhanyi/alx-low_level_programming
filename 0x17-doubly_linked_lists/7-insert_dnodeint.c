#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to a pointer to the head of the list
 * @idx: Index where the new node should be added
 * @n: Value to be added to the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int i = 0;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
			*h = new_node;
			return (new_node);
		}
	}
	while (current != NULL)
	{
		if (i == idx - 1)
		{
			new_node->next = current->next;
			new_node->prev = current;
			if (current->next != NULL)
			{
				current->next->prev = new_node;
				current->next = new_node;
				return (new_node);
			}
		}
		current = current->next;
		i++;
	}
	free(new_node);
	return (NULL);
}
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_ *add_nodeint_end - adds a new node at the end of the list.
 * @head: pointer to the new node of the list.
 * @n: new element.
 *
 * Return: pointer to the new node or NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
	current->next = new_node;
	}

	return (new_node);
}

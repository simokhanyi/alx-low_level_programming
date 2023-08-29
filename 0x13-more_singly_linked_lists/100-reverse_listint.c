#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_t *reverse_listint- function that deletes node at index of a list.
 * @head: pointer to the first node of the list.
 *
 * Return: returns a node or NULL if failed.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next_node = NULL;

	while (current != NULL)
	{
		next_node = current->next;
		current->next = prev;
		prev = current;
		current = next_node;
	}

	*head = prev;

	return (*head);
}

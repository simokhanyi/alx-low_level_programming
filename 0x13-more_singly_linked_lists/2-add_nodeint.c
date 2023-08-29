#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_ *add_nodeint - adds a new node at the beginning of the list.
 * @head: pointer to the first node on the list.
 * @n: new node
 *
 * Return: pointer to the new node or NULL if fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

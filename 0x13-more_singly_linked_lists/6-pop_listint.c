#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that frees a list.
 * @head: pointer to the first node of the list.
 *
 * Return: the data inside the elements that was.
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;

	return (data);
}

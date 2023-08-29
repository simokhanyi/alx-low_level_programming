#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees a list.
 * @head: pointer to the first node on the list.
 *
 * Return: new node or NULL if it fails.
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *temp = head;

		head = head->next;

		free(temp);
	}
}

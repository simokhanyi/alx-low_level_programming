#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function that return the sum of all the data.
 * @head: pointer to the first node of the list.
 *
 *
 * Return: the sum of the data.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

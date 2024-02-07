#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list using Jump search
 * @list: A pointer to the head of the list to search in
 * @size: The number of nodes in the list
 * @value: The value to search for
 *
 * Return: A pointer to the first node where value is located,
 *         or NULL if value is not found or list is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, prev, i;
	listint_t *current;

	if (list == NULL)
		return (NULL);

	step = sqrt(size);
	prev = 0;
	current = list;

	while (current && current->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		prev = current->index;
		for (i = 0; current->next && i < step; i++)
			current = current->next;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, current->index);
	while (prev <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev, current->n);
		if (current->n == value)
			return (current);
		prev++;
		current = current->next;
	}
	return(NULL);
}

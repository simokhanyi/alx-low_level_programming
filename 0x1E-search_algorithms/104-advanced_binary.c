#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary_recursive - Searches for a value in a sorted array
 * @array: Pointer to the first element of the array to search in
 * @low: Starting index of the subarray
 * @high: Ending index of the subarray
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	if (low > high)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i == high)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
	mid = low + (high - low) / 2;

	if (array[mid] == value)
	{
		if (array[mid - 1] == value)
			return (advanced_binary_recursive(array, low, mid, value));
		return (mid);
	}
	else if (array[mid] > value)
		return (advanced_binary_recursive(array, low, mid - 1, value));
	else
		return (advanced_binary_recursive(array, mid + 1, high, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}

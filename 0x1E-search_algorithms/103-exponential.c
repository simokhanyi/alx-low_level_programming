#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array
 *                       of integers using the Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where value is located
 *         -1 if value is not present in array or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	size_t low = i / 2;
	size_t high = i < size - 1 ? i : size - 1;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	return (binary_search(array, low, high, value));
}

/**
 * binary_search - Searches for a value in a sorted array
 *                 of integers using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @low: Lowest index of the subarray to search in
 * @high: Highest index of the subarray to search in
 * @value: Value to search for
 *
 * Return: The first index where value is located within the subarray
 *         -1 if value is not present in array or if array is NULL
 */
int binary_search(int *array, size_t low, size_t high, int value)
{
	while (low <= high)
	{
		size_t mid = low + (high - low) / 2;
		size_t i;

		printf("Searching in array:");
		for (i = low; i < high; i++)
			printf(" %d,", array[i]);
		printf(" %d\n", array[i]);

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}

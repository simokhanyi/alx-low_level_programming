#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array using the Jump search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where value is located
 *         -1 if value is not present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	size_t jump_step = sqrt(size);
	size_t prev = 0;

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	while (array[prev] < value)
	{
		size_t next = prev + jump_step;

		if (next >= size)
		{
			next = size - 1;
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", next, array[next]);

		if (array[next] >= value)
			break;
		prev += jump_step;

		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			prev, prev + jump_step);

	for (size_t i = prev; i <= prev + jump_step && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

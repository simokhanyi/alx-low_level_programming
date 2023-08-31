#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: pointer to a binary of a srting.
 *
 * Return: unsigned int or NULL if fails.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result * 2 + (b[i] - '0');
			i++;
		}
		else
		{
			return (0);
		}
	}

	return (result);
}

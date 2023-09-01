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
	unsigned int result;
	int a, c;

	if (!b)
		return (0);

	result = 0;

	for (a = 0; b[a] != '\0'; a++)
		;

	for (a--, c = 1; a >= 0; a--, c *= 2)
	{
		if (b[a] != '0' && b[a] != '1')
		{
			return (0);
		}

		if (b[a] & 1)
		{
			result += c;
		}
	}

	return (result);
}

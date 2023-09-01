#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if failed.
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	int a;

	if (index >= sizeof(a) * 8)
	{
		return (-1);
	}

	a = ~(1UL << index);
	*n &= a;

	return (1);
}

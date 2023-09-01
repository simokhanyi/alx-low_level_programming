#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number one.
 * @m: number two.
 *
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int xor_result, count;

	xor_result = n ^ m;
	count = 0;

	while (xor_result)
	{
		xor_result &= (xor_result - 1);
		count++;
	}

	return (count);
}

#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */

void print_numbers(void)
{
	unsigned int n1, n;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	} else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}

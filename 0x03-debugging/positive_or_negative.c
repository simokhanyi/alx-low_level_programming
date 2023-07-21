#include "main.h"

/**
 * main - prints positive or negative
 * Desrcrtiption: to test positive_or_negative number
 * @i: for number
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);

	else if (i < 0)
		printf("%d is negative\n", i);

	else
		printf("%d is zero\n", i);

}

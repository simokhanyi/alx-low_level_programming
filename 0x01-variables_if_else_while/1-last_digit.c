#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: print the last digit of the number stored in the variable
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % n, 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 10)
	{
		printf("Last digit of %d is %d and is 0", n, 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	return (0);
}

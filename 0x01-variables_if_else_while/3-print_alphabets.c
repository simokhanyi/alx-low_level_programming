#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: a program that prints in lowercase
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int lowerCase = 'a';
	int upperCase = 'A';

	while (lowerCase <= 'z')
	{
	putchar(lowerCase);
	lowerCase += 1;
	}
	while (upperCase <= 'z')
	{
	putchar(upperCase);
	upperCase += 1;
	}
	putchar ('\n');
	return (0);
}

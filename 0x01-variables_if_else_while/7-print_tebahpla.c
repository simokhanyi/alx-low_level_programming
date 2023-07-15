#include <stdio.h>
/**
 * main - Entry point
 * Description: prints lowercase alphabet in reverse
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);

	putchar('\n');

	return (0);
}

#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: number of arguments passed to the function.
 * @argv: two files.
 *
 * Return: integer number.
 */

int main(int argc, char *argv[])
{
	int fromFD, toFD, bytes_read, bytes_write;
	char text[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fromFD = open(argv[1], O_RDONLY);
	if (fromFD == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	toFD = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (toFD == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(fromFD, text, BUF_SIZE)) > 0)
	{
		bytes_write = write(toFD, text, bytes_read);
		if (bytes_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	exit_file(fromFD);
	exit_file(toFD);
	return (0);
}

/**
 * exit_file - close a opened file
 * @FD: file descriptor.
 *
 * Return_ nothing.
 */
void exit_file(int FD)
{
	if (close(FD) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", FD);
		exit(100);
	}
}

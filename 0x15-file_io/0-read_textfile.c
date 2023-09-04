#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - read a textfile.
 * @filename: name of the file to open.
 * @letters: number of letters to print in the standar ouput.
 *
 * Return: number of letter printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int bytesRead, bytesWritten;
	FILE *file = fopen(filename, "r");
	char *buffer = (char *)malloc(letters + 1);

	if (filename == NULL)
	{
		return (0);
	}
	if (file == NULL)
	{
		return (0);
	}
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	bytesRead = fread(buffer, 1, letters, file);
	if (bytesRead == -1)
	{
		fclose(file);
		free(buffer);

		return (0);
	}
	buffer[bytesRead] = '\0';

	bytesWritten = fwrite(buffer, 1, bytesRead, stdout);
	if (bytesWritten == -1 || bytesWritten != bytesRead)
	{
		fclose(file);
		free(buffer);

		return (0);
	}
	fclose(file);
	free(buffer);
	return (bytesRead);
}

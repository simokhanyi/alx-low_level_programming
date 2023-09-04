#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - Append text at the end of a file.
 * @filename: name of the file to create.
 * @text_content: text to write inside the file.
 *
 * Return: 1 if text_content was appened, -1 otherwise.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int result;
	FILE *file;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	file = fopen(filename, "a");

	if (file == NULL)
	{
		return (-1);
	}
	result = fprintf(file, "%s", text_content);

	fclose(file);

	if (result < 0)
	{
		return (-1);
	}
	return (1);
}

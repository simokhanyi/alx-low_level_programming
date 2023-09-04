#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "main.h"

/**
 * create_file - function that creats a file.
 * @filename: name of the file to create.
 * @text_content: text to write inside the file.
 *
 * Return: 1 if text_content was appened, -1 otherwise.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		ssize_t write_result = write(fd, text_content, strlen(text_content));

		if (write_result == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

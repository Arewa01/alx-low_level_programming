#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * create_file - a function that creates a file
 * @filename: the name of the file to create
 * @text_content: a null terminated string
 * Return: returns 1 on success, and -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 1;
	int result = 1;
	int i = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[i])
		{
			i++;
		}
		result = write(fd, text_content, i);
	}
	if (result == -1)
		return (-1);
	close(fd);
	return (1);
}

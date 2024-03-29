#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * append_text_to_file -  a function that appends text at the end of a file
 * @filename: the name of the file to append to
 * @text_content: a null terminated string
 * Return: returns 1 on success, and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	wr = write(fd, text_content, strlen(text_content));

	if (wr == -1 || (size_t)wr != strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

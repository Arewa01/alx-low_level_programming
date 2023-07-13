#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - a function that reads a text file.standard output.
 * @filename:  the name of the file
 * @letters: number of letters it shpuld read or print
 * Return: the actual number of letters or 0 if it fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buffer;

	if (!filename)
		return (0);
	fd = open("filename", O_RDONLY);

	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);
	rd = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (wr == -1 || rd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (rd);
}

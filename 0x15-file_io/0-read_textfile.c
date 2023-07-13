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
	ssize_t fd, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	fd = open("filename", O_RDONLY);
	rd = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (fd == -1 || wr == -1 || rd == -1 || wr != rd)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (rd);
}

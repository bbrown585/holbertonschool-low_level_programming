#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file and prints to stdout
 * @filename: file name
 * @letters: number of letters printed
 * Return: Number of letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd = 0, wr = 0, r = 1;
	size_t *buffer;

	if (filename == NULL)
		return (0);

	if (letters <= 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	r = 0;
	else
	r = fd;

	rd = read(fd, buffer, letters);

	if (rd == -1)
	r = 0;
	else
	r = rd;

	wr = write(STDOUT_FILENO, buffer, rd);

	if (wr == -1)
	r = 0;

	close(fd);
	free(buffer);
	return (r);
}

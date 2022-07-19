#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: filename to read
 * @text_content: number of letters printed
 *
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int file, wr, len = 0;

	if (filename == NULL)
	return (-1);

	if (text_content == NULL)
	text_content = "";

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
	return (-1);

	for ( ; text_content[len] != '\0' ; len++)
	;

	wr = write(file, text_content, len);

	if (wr == -1)
	return (-1);

	close(file);
	return (1);
}

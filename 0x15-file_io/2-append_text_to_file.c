#include "main.h"

/**
 * append_text_to_file - append text at the end of a line
 * @filename: filename to read
 * @text_content: text to add in
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, right, len = 0;

	if (filename == NULL)
	return (-1);

	file = open(filename, O_WRONLY | O_APPEND, 0600);

	if (file == -1)
	return (-1);

	if (text_content != NULL)
	{
	for ( ; text_content[len] != '\0' ; len++)
	len++;

	right = write(file, text_content, len);
	if (right == -1)
	{
	close(file);
	return (-1);
	}

	}

	close(file);
	return (1);
}

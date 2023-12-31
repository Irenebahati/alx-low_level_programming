#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: text to write in the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, b, i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
		b = write(fd, text_content, i);
		if (b != i)
			return (-1);
	}

	close(fd);

	return (1);
}

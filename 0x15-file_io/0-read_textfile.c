#include "main.h"
/**
 * read_textfile - reads a text file and prints the letters
 * @filename: name of file to be read
 * @letters: num of letters to be read and printed
 * Return: num of letters printed if successful and 0 if otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, a, b;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	a = read(fd, buffer, letters);
	if (a < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[a] = '\0';
	close(fd);

	b = write(STDOUT_FILENO, buffer, a);
	if (b < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (b);
}

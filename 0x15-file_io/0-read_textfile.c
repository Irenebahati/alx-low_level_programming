#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and prints it to STDOUT
 * @filename: the text file to be read
 * @letters: the number of letters it should read and print
 * Return: actual number of letters it could read and print
 * or 0 when file can't be opened or read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fn;
	ssize_t x;
	ssize_t y;

	fn = open(filename, O_RDONLY);
	if (fn == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	y = read(fn, buf, letters);
	x = write(STDOUT_FILENO, buf, y);

	free(buf);
	close(fn);
	return (x);
}

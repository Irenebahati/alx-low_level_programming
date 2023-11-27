#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fd_a, fd_b, a, x, y;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_a = open(argv[1], O_RDONLY);
	if (fd_a < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_b = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((a = read(fd_a, buf, BUFSIZ)) > 0)
	{
		if (fd_b < 0 || write(fd_b, buf, a) != a)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_a);
			exit(99);
		}
	}
	if (a < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	x = close(fd_a);
	y = close(fd_b);
	if (x < 0 || y < 0)
	{
		if (x < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_a);
		if (y < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_b);
			exit(100);
																						}
	return (0);
}

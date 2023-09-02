#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed on to the program
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

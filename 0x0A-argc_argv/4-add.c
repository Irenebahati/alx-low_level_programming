#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * check_num - check whether string is a digit
 * @str: array string
 * Return: 0
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - prints the name of the program
 * @argv: array of arguments
 * @argc: numbr of argumrnts
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count = 1;
	int sum, str_to_int;

	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}

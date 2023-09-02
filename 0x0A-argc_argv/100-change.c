#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argv: an array of arguments
 * @argc: number of arguments
 * Return: 0 if successful and 1 if unsuccessful
 */

int main(int argc, char *argv[])
{
	int x, y, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	result = 0;
	if (x < 0)
	{
		printf("0\n");
		return (0);
	}
	for (y = 0; y < 5 && x >= 0; y++)
	{
		while (x >= coins[y])
		{
			result++;
			x -= coins[y];
		}
	}
	printf("%d\n", result);
	return (0);
}

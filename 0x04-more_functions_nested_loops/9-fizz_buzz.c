#include <stdio.h>
#include "main.h"

/**
 * main - prints numbers from 1 to 100
 * followed bt a new line
 * it prints Fizz for multiples of 3
 * it prints Buzz for multiples of 5
 * it prints FizzBuzz for multiples of 3 and 5
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)

	{
		if (i % 3 == 0)

		{
			printf(" Fizz");
		}

		else if (i % 5 == 0)

		{
			printf(" Buzz");
		}

		else if (i % 3 == 0 && i % 5 == 0)

		{
			printf(" FizzBuzz");
		}

		else if (i == 1)

		{
			printf(" %d", i);
		}

		else

		{
			printf("%d", i);
		}
	}

	printf("\n");

	return (0);
}

#include <stdio.h>
/**
 * main - Starting point
 * Return: 0
 */

int main(void)
{
	int num1 = '0';
	int num2 = '0';

	for (num2 = '0'; num2 <= '9'; num2++)

	{

		for (num1 = '0'; num1 <= '9'; num1++)

		{

			if (!(num1 == num2) || (num2 > num1))

			{

				putchar(num2);
				putchar(num1);
			}

		}

	}

	putchar('\n');
	return (0);

}

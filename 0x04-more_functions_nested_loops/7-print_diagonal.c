#include "main.h"

/**
 * print_diagonal - prints a diagonal line in the terminal
 *
 * @n: is the number of times \ will be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)

	{
		_putchar('\n');
	}

	else

	{
		int j, k;

		for (j = 0; j < n; j++)

		{
			for (k = 0; k < n; k++)

			{
				if (j == k)

					_putchar('\\');

				else if (k < j)

					_putchar(' ');
			}

			_putchar('\n');
		}
	}
}

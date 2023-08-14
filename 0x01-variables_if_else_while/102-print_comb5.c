#include <stdio.h>
#include <stdlib.h>
/**
 * main - The starting point
 * Return: 0
 */

int main(void)
{
	int dgt1, dgt2;

	for (dgt1 = 0; dgt1 < 100; dgt1++)

	{
		for (dgt2 = 0; dgt2 < 100; dgt2++)

		{
			if (dgt1 < dgt2)

			{
				putchar(dgt1 / 10 + 48);
				putchar(dgt1 % 10 + 48);
				putchar(' ');
				putchar(dgt2 / 10 + 48);
				putchar(dgt2 % 10 + 48);
				if (dgt1 != 98 || dgt2 != 99)

				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}


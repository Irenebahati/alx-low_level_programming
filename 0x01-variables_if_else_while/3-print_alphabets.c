#include <stdio.h>
/**
 * main - The program begins here
 * Return: 0
 */

int main(void)
{
	char U = 'A';
	char L = 'a';

	while (U >= 'A')
	{
		putchar (U);
		U++;
	} while (L <= 'z')
	{
		putchar (L);
		L++;
	}
	putchar('\n');
	return (0);
}

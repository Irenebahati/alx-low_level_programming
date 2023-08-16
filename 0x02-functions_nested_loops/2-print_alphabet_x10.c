#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times in lower case
 *
 */

void print_alphabet_x10(void)
{
	char alpha;
	int l;

	while (l < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		l++;
	}
}

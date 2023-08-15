#include "main.h"
/**
 * print_alphabet - prints alphabets in lower case
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}

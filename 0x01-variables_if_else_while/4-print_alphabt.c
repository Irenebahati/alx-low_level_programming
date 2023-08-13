#include <stdio.h>
/**
 * main - Beginning point
 * return: 0 (success)
 */

int main(void)
{
	char A = 'a';

	while
		(A <= 'z') {
			if ((A != 'e' && A != 'q') && A <= 'z')
				putchar(A);
			A++;
		}
	putchar('\n');
	return (0);
}

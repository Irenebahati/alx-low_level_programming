#include "main.h"
/**
 * flip_bits - returns num of bits needed to flip
 * to get from one num to another
 * @n: first num
 * @m: second num
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m, check = 1;
	unsigned int a, uint  = 0;

	for (a = 0; a < (sizeof(unsigned long int) * 8); a++)
	{
		if (check == (diff & check))
			uint++;
		check <<= 1;
	}
	return (uint);
}

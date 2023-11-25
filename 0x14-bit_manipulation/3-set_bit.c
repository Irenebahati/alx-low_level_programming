#include "main.h"
/**
 * set_bit - sets the bit value to 1 at an index
 * @n: the number to be set
 * @index: index where the bit is set
 * Return: 1 if succesful or -1 if otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	bit = 1 << index;
	*n = *n | bit;
	return (1);
}

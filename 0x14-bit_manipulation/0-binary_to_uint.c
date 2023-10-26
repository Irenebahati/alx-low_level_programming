#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number
 */
unsigned int binary_to_uint(conts char *b)
{
	unsigned int num = 0;
	int len = strlen(b);

	for (int i = 0; i < len; i++)
	{
		if (b[i] == '1')
		{
			num = (num << 1) | 1;
		}
		else if (b[i] == '0')
		{
			num = (num << 1);
		}
		else
			return (0);
	}
	return (num);
}

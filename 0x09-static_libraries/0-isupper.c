#include "main.h"
/**
 * _isupper - checks upper case letters
 * @c: character to check
 * Return: 0 if successful and 1 if unsuccessful
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}

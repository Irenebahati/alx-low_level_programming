#include "main.h"

/**
 * _isdigit - checks for a digit through 0 to 9
 *
 * @c: is the charaster to be checked
 *
 * Return: 1 if c is a digit or return 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

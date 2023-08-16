#include "main.h"
/**
 * _isalpha - checks an alphabetic character
 *
 * @c: is the character to be checked
 *
 * Return: 1 if c is a letter and 0 if otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

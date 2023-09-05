#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char ro assign
 * Return: pointer to array and NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		str[x] = c;
	}
	return (str);
}

#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: is the minimum range of values to be stored
 * @max: is the maximum range of values to be stored
 * Return: a pointer to the new array
 */

int *array_range(int min, int max)
{
	int *ptr, a, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (a = 0; min <= max; a++)
		ptr[a] = min++;
	return (ptr);
}

#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: poiner to the previous memory allocared by malloc
 * @old_size: size of allocated memory of ptr
 * @new_size: size of the new memory block
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1, *ptr2;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	ptr2 = malloc(new_size);
	if (!ptr2)
		return (NULL);
	ptr1 = ptr;
	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			ptr2[a] = ptr1[a];
	}
	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			ptr2[a] = ptr1[a];
	}
	free(ptr);
	return (ptr2);
}

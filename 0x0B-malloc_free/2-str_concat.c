#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenztes two strings
 * @s1: first input to concatenate
 * @s2: second input to concatenate
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j;

	i = 0;
	j = 0;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	concat = malloc(sizeof(char) * (i + j + 1));
	if (concat == NULL)
		return (NULL);
	while (s1[i] != '\0')
		concat[i] = s1[i];
	i++;
	while (s2[j] != '\0')
		concat[i] = s2[j];
	i++, j++;

	concat[i] = '\0';
	return (concat);
}

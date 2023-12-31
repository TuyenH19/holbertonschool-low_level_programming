#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create am array of chars with specific char
 * @size: size of array
 * @c: specific char
 *
 * Return: an array of chars c
 */

char *create_array(unsigned int size, char c)
{
	char *s = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);

	if (!s)
		return (NULL);

	i = 0;
	while (i < size)
	{
		*(s + i) = c;
		i++;
	}
	return (s);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - return a pointer to a new space that contains the string given
 * @str: string given
 *
 * Return: a pointer
 */

char *_strdup(char *str)
{
	int i, j;
	char *s;

	for (i = 0; str[i] != '\0'; i++)
		i++;

	s = malloc(sizeof(char) * i);

	if (!s)
		return (NULL);
	for (j = 0; j <= i + 1; j++)
	{
		s[j] = str[j];
	}
	return (s);
}

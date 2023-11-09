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
	unsigned int len, i;
	char *s = NULL;

	if (!str)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	s = malloc(sizeof(char) * (len + 1));

	if (!s)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}

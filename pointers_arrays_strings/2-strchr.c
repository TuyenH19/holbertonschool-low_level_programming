#include "main.h"
#include <string.h>

/**
 * _strchr - locate a character in a string
 * @s: string input
 * @c: character to find
 *
 * Return: pointer to the location that character occur first in the  string
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return ('\0');
}

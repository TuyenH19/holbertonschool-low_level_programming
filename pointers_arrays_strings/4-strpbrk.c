#include "main.h"
#include <string.h>

/**
 * _strpbrk - search string for any of a set of bytes
 * @s: specify the string to search
 * @accept: specify the characters to find
 *
 * Return: a pointer to the byte in s that match one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, len;

	for (len = 0; s[len] != '\0'; len++)
		len++;
	for (i = 0; s[i] != '\0' && i <= len + 1; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return ('\0');
}

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
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0' && j <= len + 1; j++)
		{
			if (s[j] == accept[i])
			{
				return (&s[j]);
				continue;
			}
		}
	}
	return ('\0');
}

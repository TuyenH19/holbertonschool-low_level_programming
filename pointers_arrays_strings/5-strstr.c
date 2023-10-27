#include "main.h"
#include <string.h>

/**
 * _strstr - search for the first occurence of a string inside anothers tring
 * @haystack: specify the string to search
 * @needle: specify the string to search for
 *
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, len;

	for (len = 0; needle[len] != '\0'; len++)
		len++;
	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (haystack[j] == needle[i])
				i++;
		}
		return (&haystack[j - len + 1]);
	}
	return ('\0');
}

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
	unsigned int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] != haystack[i + j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return ('\0');
}

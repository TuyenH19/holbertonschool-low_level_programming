#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: string destination
 * @src: string source
 *
 * Return: string dest
 */

char *_strcat(char *dest, char *src)
{
	int index;
	int len_dest = 0;

	while (dest[len_dest] != '\0')
		len_dest++;
	for (index = 0; src[index] != '\0'; index++)
	{
		dest[len_dest + index] = src[index];
	}
	if (src[index] == '\0')
		dest[len_dest + index] = '\0';
	return (dest);
}

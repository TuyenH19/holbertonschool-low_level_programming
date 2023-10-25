#include "main.h"

/**
 * _strnchat - concatenate two strings with n characters
 * @dest: string destination
 * @src: string source
 *
 * Return: string destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int index;
	int len_dest = 0;

	while (dest[len_dest] != '\0')
		len_dest++;
	for (index = 0; index < n && src[index] != '\0'; index++)
		dest[len_dest + index] = src[index];
	dest[len_dest + index] = '\0';
	return (dest);
}

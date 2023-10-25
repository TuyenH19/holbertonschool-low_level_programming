#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: string destination
 * @src: string source
 * @n: number of character
 *
 * Return: string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
		dest[index] = src[index];
	for (; index < n; index++)
		dest[index] = '\0';
	return (dest);
}

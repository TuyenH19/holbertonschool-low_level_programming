#include "main.h"

/**
 * _strcpy - copy a string to other destination
 * @dest: destination
 * @src: string
 *
 * Return: a string
 */

char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
		dest[index] = src[index];
	if (src[index] == '\0')
		dest[index] = '\0';
	return (dest);
}

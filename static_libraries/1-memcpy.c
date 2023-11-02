#include "main.h"
#include <string.h>

/**
 * _memcpy - copy memory area
 * @dest: string destination
 * @src: string source
 * @n: n bytes from memory src
 *
 * Return: current string which has been copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

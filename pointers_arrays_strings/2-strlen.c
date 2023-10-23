#include "main.h"

/**
 * _strlen -length of a string
 * @s: string
 *
 * Return: the length
 */

int _strlen(char *s)
{
	int len;
	char *ptr;

	ptr = s;
	len = 0;
	while (*ptr != 0)
	{
		len++;
		ptr++;
	}
	return (len);
}

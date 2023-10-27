#include "main.h"
#include <string.h>

/**
 * _strspn - get length of a prefix substring
 * @s: main string
 * @accept: substring
 *
 * Return: the length in byte
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count, check;

	count = 0;
	for (i = 0; s[i] != '0'; i++)
	{
		check = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count += 1;
				check = 1;
				break;
			}
		}
		if (check == 0)
			break;
	}
	return (count);
}

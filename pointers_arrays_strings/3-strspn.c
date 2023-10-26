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
	int i, j;
	int count = 0;

	for (i = 0; s[i] != '0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] != accept[j])
				j++;
			else
				if (s[i] == accept[j])
				{
					count += 1;
					break;
				}
		}
	}
	return (count - 1);
}

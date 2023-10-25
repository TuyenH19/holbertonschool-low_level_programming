#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: difference in number
 */

int _strcmp(char *s1, char *s2)
{
	int diff;
	int index = 0;

	while (s1[index] != '\0')
	{
		if (s1[index] != s2[index])
			break;
		else 
			index++;
	}
	diff = s1[index] - s2[index];
	return (diff);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: string input
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int n = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign = sign * (-1);
		else if  (s[i] >= '0' && s[i] <= '9')
			n = (n * 10) + (s[i] - '0');
		else if (n > 0)
			break;
		i++;
	}
	return (sign * n);
}

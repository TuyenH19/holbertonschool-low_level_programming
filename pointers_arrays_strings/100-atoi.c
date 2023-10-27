#include "main.h"
#include <stdlib.h>

/**
 * atoi - convert a string to an integer
 * @s: string input
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int i, n;
	int sign = 1;
	
	for (i = 0; s[i] != '\0'; i++)
	{	
		if (s[i] < 48 || s[i] > 57)
			i++;
		if (s[i] >= 48 && s[i] <= 57)
		{
			for (n = 0; n < i; n++)
			{	
				if (s[n] == 45)
					sign *= (-1);
			}
			if (s[i] < 48 || s[i] > 57)
				return (s[i-1]);
		}
	}
	return (sign * s[i-1]);
}

#include "main.h"

/**
 * leet - encode a string to 1337
 * @s: string input
 *
 * Return: current string which is encoded
 */

char *leet(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == 'a' || s[i] == 'A')
			s[i] = '4';
		else
			if (s[i] == 'e' || s[i] == 'E')
				s[i] = '3';
			else
				if (s[i] == 'o' || s[i] == 'O')
					s[i] = '0';
				else
					if (s[i] == 't' || s[i] == 'T')
						s[i] = '7';
					else
						if (s[i] == 'l' || s[i] == 'L')
							s[i] = '1';
						else
							s[i] = s[i];
		i++;
	}
	return (s);
}

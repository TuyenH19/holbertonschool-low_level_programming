#include "main.h"

/**
 * leet - encode a string to 1337
 * @s: string input
 *
 * Return: current string which is encoded
 */

char *leet(char *s)
{
	int i1, i2;
	char letter[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char encode[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i1 = 0; s[i1] != '\0'; i1++)
	{
		for (i2 = 0; i2 < 10; i2++)
		{
			if (s[i1] == letter[i2])
				s[i1] = encode[i2];
		}
	}
	return (s);
}

#include "main.h"

/**
 * cap_string - capitallize all words of a string
 * @s: string input
 *
 * Return: current string with all words be capitalized
 */

char *cap_string(char *s)
{
	int i;

	if (s[0] >= 97 && s[0] <= 122)
	       s[0] = s[0] - 32;
	else
		s[0] = s[0];
	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[i - 1] == 32 || s[i - 1] == 9 || s[i - 1] == 10 ||
		s[i - 1] == 44 || s[i - 1] == 59 || s[i - 1] == 46 ||
		s[i - 1] == 33 || s[i - 1] == 63 || s[i - 1] == 34 ||
		s[i - 1] == 40 || s[i - 1] == 41 || s[i - 1] == 123 || s[i - 1] == 125)
		{
			if (s[i] >= 97 && s[i] <= 122)
				s[i] = s[i] - 32;
			else
				s[i] = s[i];
		}
		else
			s[i] = s[i];
	}
	return (s);
}

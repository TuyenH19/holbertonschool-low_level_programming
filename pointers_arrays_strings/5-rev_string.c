#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string input
 *
 * Return: Nothing.
 */

void rev_string(char *s)
{
	int len = 0;
	int start = 0;
	int end = 0;
	int tmp;

	while (s[len] != '\0')
	{
		len++;
	}
	end = len - 1;
	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
	start++;
	end--;
	}
}

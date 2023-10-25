#include "main.h"

/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @s: string input
 *
 * Return: meme string with letters uppercase
 */

char *string_toupper(char *s)
{
	int index;;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index ] >= 97 && s[index] <= 122)
			s[index] = s[index] - 32;
		else
			s[index] = s[index];
	}
	return (s);
	
}

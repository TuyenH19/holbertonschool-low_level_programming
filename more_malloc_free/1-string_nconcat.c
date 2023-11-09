#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate 2 strings
 * @s1: strng1
 * @s2: string2
 * @n: n first bytes of s2
 *
 * Return: pointer to newly allocated space of string concatenated
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, len, index;
	char *str = NULL;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	for (len1 = 0; s1[len1] != '\0'; len1++)
		continue;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		continue;

	if (n >= len2)
		len = len1 + len2;
	if (n < len2)
		len = len1 + n;

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	index = 0;
	len2 = 0;
	while (index < len)
	{
		if (index < len1)
			str[index] = s1[index];
		if (index >= len1)
		{
			str[index] = s2[len2];
			len2++;
		}
		index++;
	}
	str[len] = '\0';
	return (str);
}

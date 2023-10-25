#include "main.h"
#include <stdio.h>
#include <string.h>
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

	if (*s1 == *s2)
		diff = 0;
	else
		diff = (*s1 - *s2);
	return (diff);;
}

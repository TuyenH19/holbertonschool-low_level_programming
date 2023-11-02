#include "main.h"

/**
 * _isalpha - to check the alphabetic character
 *
 * @c: value of the input
 * Return: 1 if c is a letter and 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: integer1
 * @b: integer2
 *
 * Return: nothing.
 */

void swap_int(int *a, int *b)
{
	int c;

	 c = *b;
	 *b = *a;
	 *a = c;
}

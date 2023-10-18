#include "main.h"

/**
 * _islower - check lowercase character, return 1 if lowercase and 0 if not
 *
 * @c: value of input
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

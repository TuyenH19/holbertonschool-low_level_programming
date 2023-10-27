#include "main.h"

/**
 * print_chessboard - to print the chessboard
 * @a: the array input
 *
 * Return: a chessboard (with 8 cloumns)
 */

void print_chessboard(char (*a)[8])
{
	unsigned int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
			_putchar(a[row][col]);
		_putchar('\n');
	}
}

#include "main.h"

/**
 *_strstr - a function that prints the chessboard.
 *@a: the chessboard to print
 */

void print_chessboard(char(*a)[8])
{
	unsigned int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}

		_putchar(10);
	}
}

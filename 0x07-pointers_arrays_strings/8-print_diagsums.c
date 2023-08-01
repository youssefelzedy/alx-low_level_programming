#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - a function that prints the sum of the two diagonals
 *of a square matrix of integers.
 *@a: matrix of integers.
 *@size: size of matrix.
 */

void print_diagsums(int *a, int size)
{
	int i, right, left, x, y;

	x = y = 0;
	right = 0;
	left = size - 1;
	for (i = 0; i < size; i++)
	{
		x += *(a + i * size + right);
		y += *(a + i * size + left);
		left -= 1;
		right += 1;
	}
	printf("%d, %d\n", x, y);
}

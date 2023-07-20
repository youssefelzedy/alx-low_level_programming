#include "main.h"

/**
 *print_diagonal - function that draws a diagonal line on the terminal.
 *@n: is a character
 *Return: retrun 0 or 1
 */

void print_diagonal(int n)
{
	int j, i;
	
	if (n <= 0)
		_putchar('\n');

	for (j = 1; j <= n; j++)
	{
		for (i = 1; i <= j; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

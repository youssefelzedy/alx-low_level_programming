#include "main.h"

/**
 *print_square -  function that prints a square.
 *@size: is a character
 *Return: retrun nothing
 */

void print_square(int size)
{
	int j, i;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (j = 1; j <= size; j++)
		{
			for (i = 1; i <= size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

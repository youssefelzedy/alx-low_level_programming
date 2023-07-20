#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * Return: no return (Success)
 */

void more_numbers(void)
{

	int i, j, mod;
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar('1');	
			mod = i % 10;
			_putchar(mod + '0');
		}
		_putchar('\n');
	}
}

#include "main.h"
/**
 * print_last_digit - function that return the last digit.
 * @c: is a character
 * Return: retrun int
 */

int print_last_digit(int c)
{
	int x = c % 10;

	if (x < 0)
		x = x * -1;
	_putchar(x + '0');
	return (x);
}

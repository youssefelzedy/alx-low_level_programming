#include "main.h"

/**
 *print_binary - ...
 *@n: ...
 *Return: ..
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = n % 2;

	if (n > 1)
		print_binary(n / 2);
	_putchar(i + '0');
}

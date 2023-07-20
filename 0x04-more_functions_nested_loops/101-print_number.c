#include "main.h"
#include <stdio.h>

/**
 *print_number -  prints the number
 *@n: is an long long int
 *Return: retrun the bigest facor num
 */

void print_number(int n)
{
	int test, mod = 1, gg;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n == -2147483648)
		{
			n = 147483648;
			_putchar('-');
			_putchar('2');
		}
		if (n >= 1000000000)
		{
			_putchar('0' + n / 1000000000);
			n -= (n / 1000000000) * 1000000000;
		}
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}
		gg = n;
		while (gg != 0)
		{
			gg /= 10;
			mod *= 10;
		}
		while (n > 0)
		{
			mod /= 10;
			test = n / mod;
			n %= mod;
			_putchar(test + '0');
		}
	}
}

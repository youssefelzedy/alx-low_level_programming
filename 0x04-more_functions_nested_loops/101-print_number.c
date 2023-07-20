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
		/*printf("mod %d num %d \n", mod, n);*/
		while (n > 0)
		{
			mod /= 10;
			test = n / mod;
			n %= mod;
			/*printf("moz %d num %d \n", mod, n);*/
			_putchar(test + '0');
		}
	}
}

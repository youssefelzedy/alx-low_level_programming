#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the sum of all the multiples of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int i, x = 0, y = 1, z, sum = 0;

	z = x + y;
	for (i = 0; z <= 4000000; i++)
	{
		if (z % 2 == 0)
			sum += z;
		x = y;
		y = z;
		z = x + y;
	}
	printf("%ld\n", sum);
	return (0);
}

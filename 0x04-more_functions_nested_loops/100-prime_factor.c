#include "main.h"
#include <stdio.h>

/**
 *flpf -  prints the largest prime factor of the number.
 *@n: is an long long int
 *Return: retrun the bigest facor num
 */

long int flpf(long int n)
{
	long int largestPrime = -1, i;

	while (n % 2 == 0)
	{
		largestPrime = 2;
		n /= 2;
	}

	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			largestPrime = i;
			n /= i;
		}
	}

	if (n > 2)
	{
		largestPrime = n;
	}

	return (largestPrime);
}

/**
 *main - the main of program.
 *Return: retrun nothing
 */

int main(void)
{
	long int number = 612852475143;
	long int largestPrimeFactor = flpf(number);

	printf("%ld\n", largestPrimeFactor);

	return (0);
}

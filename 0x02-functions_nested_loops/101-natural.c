#include <unistd.h>
#include <stdio.h>

/**
 * main - print the natural numbers.
 * Description: prints the sum of all the multiples of 3 or 5 below 1024.
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int sum = 0, i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}

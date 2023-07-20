#include <unistd.h>
#include <stdio.h>

/**
 * main - print the natural numbers.
 * Description: prints the sum of all the multiples of 3 or 5 below 1024.
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

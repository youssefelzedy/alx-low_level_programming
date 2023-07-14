#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and uppercase in the same line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
			putchar(',');
		if (i != 9)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}

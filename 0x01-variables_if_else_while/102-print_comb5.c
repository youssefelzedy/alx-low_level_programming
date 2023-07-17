#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int c, a;

	for (c = 0; c <= 99; c++)
	{
		for (a = 0; a <= 99; a++)
		{
			if (a <= c)
				continue;
			putchar(c / 10 + '0');
			putchar(c % 10 + '0');
			putchar(' ');
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			if (c == 98)
				break;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

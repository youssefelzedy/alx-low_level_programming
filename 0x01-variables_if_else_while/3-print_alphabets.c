#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and uppercase in the same line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(i + 'a');
	}
	for (i = 0; i < 26; i++)
	{
		putchar(i + 'A');
	}
	putchar('\n');
	return (0);
}

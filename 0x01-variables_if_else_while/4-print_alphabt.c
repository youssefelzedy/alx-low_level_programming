#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		if ((i + 'a') != 'q' || (i + 'a') != 'e')
			putchar(i + 'a');
	}
	putchar('\n');
	return (0);
}

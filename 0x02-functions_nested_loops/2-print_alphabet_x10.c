#include "main.h"
/**
 *print_alphabet_x10 - function that print alphabet it prints in lowercase x10
 *Return: no return (Success)
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

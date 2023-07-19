#include "main.h"
/**
 * print_alphabet - function that print alphabet
 *it prints in lowercase
 * Return: no return (Success)
 */

void print_alphabet(void)
{

	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}

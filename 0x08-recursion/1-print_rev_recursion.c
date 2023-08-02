#include "main.h"

/**
 *_print_rev_recursion -  print string
 *@s: is a string
 *Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}

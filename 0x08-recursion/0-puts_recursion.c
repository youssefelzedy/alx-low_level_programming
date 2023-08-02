#include "main.h"

/**
 *_puts_recursion -  print string
 *@s: is a string
 *Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);

}

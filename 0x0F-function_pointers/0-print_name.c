#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: address func
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

#include "main.h"
#include <stdio.h>

/**
 *print_rev -  print a reavers string
 *@s: is an string
 *Return: Nothing
 */

void print_rev(char *s)
{
	int le = strlen(s), i;

	for (i = le - 1; i >= 0; i--)
	{
		printf("%c", *(s + i));
	}
	printf("\n");
}

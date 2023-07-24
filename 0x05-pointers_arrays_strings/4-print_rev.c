#include "main.h"
#include <stdio.h>

/**
 *print_rev -  print a reavers string
 *@s: is an string
 *Return: Nothing
 */

void print_rev(char *s)
{
	int len = strlen(s), i;

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", *(s + i));
	}
	printf("\n");
}

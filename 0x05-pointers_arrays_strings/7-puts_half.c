#include "main.h"
#include <stdio.h>

/**
 *puts_half -  print half string
 *@str: is an string
 *Return: Nothing
 */

void puts_half(char *str)
{
	int len = strlen(str), i;

	for (i = (len) / 2; i < len; i++)
	{
		printf("%c", *(str + i));
	}
	printf("\n");
}

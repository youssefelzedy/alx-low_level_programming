#include "main.h"
#include <stdio.h>

/**
 *puts2 -  print even postion
 *@str: is an string
 *Return: Nothing
 */

void puts2(char *str)
{
	int len = strlen(str), i;

	for (i = 0; i < len; i++)
	{
		if (*(str + i) % 2 == 0)
			printf("%c", *(str + i));
	}
}

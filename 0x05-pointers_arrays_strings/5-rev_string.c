#include "main.h"
#include <stdio.h>

/**
 *rev_string -  swap to values
 *@s: is an string
 *Return: Nothing
 */

void rev_string(char *s)
{
	int len = strlen(s), i;

	for (i = 0; i < len / 2; i++)
	{
		int temp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = temp;
	}
}

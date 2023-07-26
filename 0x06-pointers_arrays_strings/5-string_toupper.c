#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *string_toupper -  to make all string to upper case
 *@s: is a string
 *Return: nothing
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] += 'A' - 'a';
		i++;
	}

	return (s);
}

#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *cap_string - cap first char in each word
 *@s: the main string
 *Return: string
 */

char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i - 1] == '\t' ||
				s[i - 1] == '\n' ||
				s[i - 1] == ' ' ||
				s[i - 1] == '.' ||
				s[i - 1] == '?' ||
				s[i - 1] == '!' ||
				s[i - 1] == ',' ||
				s[i - 1] == ';' ||
				s[i - 1] == '"' ||
				s[i - 1] == '(' ||
				s[i - 1] == ')' ||
				s[i - 1] == '{' ||
				s[i - 1] == '}' ||
				i == 0)
				s[i] += 'A' - 'a';
		}

		i++;
	}

	return (s);
}

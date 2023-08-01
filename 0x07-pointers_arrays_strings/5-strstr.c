#include "main.h"

/**
 *_strstr -  a function that locates a substring.
 *@haystack: the input string
 *@needle: a string to check
 *Return: return pointer to the character or null if not
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;
	char *s;
	
	for (i = 0; haystack[i] != 0; i++)
	{
		j = 0;
		s = &haystack[i];
		while (haystack[i] == needle[j])
		{
			i++;
			j++;
		}

		if (needle[j] == 0)
			return (s);
	}

	return (0);
}

#include "main.h"

/**
 *_strchr - a function that locates a character in a string.
 *@s: input string
 *@c: character to occurrence
 *Return: return pointer to the character or null if not
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == c)
			break;
	}

	return (&s[i]);
}

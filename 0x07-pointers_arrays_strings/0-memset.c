#include "main.h"

/**
 *_memset - a function that fills memory with a constant byte.
 *The _memset() function fills the first n bytes of the memory area
 *pointed to by s with the constant byte b
 *@s: array to fiil
 *@b: the constant byte which we fiils the memory wihe it
 *@n: the number of bytes
 *Return: pointer to array s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

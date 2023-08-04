#include "main.h"

/**
 *_memcpy - a function that fills memory with a constant byte.
 *The _memcpy() function copies n bytes from memory area src
 *to memory area dest
 *@src: array to copy
 *@dest: the copied array
 *@n: the number of bytes
 *Return: pointer to array dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

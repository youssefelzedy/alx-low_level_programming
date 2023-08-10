#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - creat str with in s1 and s2
 * @nmemb: int
 * @size: int
 * Return: pointer
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int cnt = size * nmemb, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < cnt; i++)
		ptr[i] = '0';

	return (ptr);

}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat - creat str with in s1 and s2
 *@s1: str1
 *@s2: str2
 *@n: num of char that take it form s2
 *Return: string;
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str = malloc(sizeof(char) * strlen(s1));
	unsigned int cntr = strlen(s1), i, j;

	if (str == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; i < cntr; i++)
	{
		str[i] = s1[i];
	}

	if (n >= strlen(s2))
		n = strlen(s2);

	str = realloc(str, n);

	for (j = 0; j < n; i++, j++)
	{
		str[i] = s2[j];
	}

	str[i] = '\0';

	return (str);
}

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - concatenates two strings.
 *@s1: string
 *@s2: string
 *Return: array of character
 */

char *str_concat(char *s1, char *s2)
{
	char *ch;
	int i, sz, len1, len2;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = strlen(s1);

	if (s2 == NULL)
		len2 = 0;
	else
		len2 = strlen(s2);

	sz = len1 + len2;
	ch = malloc(sz + 1);

	if (ch == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ch[i] = s1[i];
	for (i = strlen(s1); i < sz; i++)
		ch[i] = s2[i - len1];

	ch[i] = '\0';
	return (ch);
}

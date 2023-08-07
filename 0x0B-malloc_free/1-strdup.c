#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - duplicate of the string str.
 *@str: is string
 *Return: array of character
 */

char *_strdup(char *str)
{
	char *ch = malloc(sizeof(str));
	int i, sz = sizeof(str);

	if (ch == NULL || sz == 0)
		return (NULL);

	for (i = 0; i < sz; i++)
		ch[i] = str[i];
	return (ch);
}

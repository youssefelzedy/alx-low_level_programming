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
	char *ch;
	int i, sz = strlen(str);

	ch = malloc(sz + 1);
	if (ch == NULL || sz == 0)
		return (NULL);
	for (i = 0; i < sz; i++)
		ch[i] = str[i];
	ch[i] = '\0';
	return (ch);
}

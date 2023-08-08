#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: argument count
 * @av: arguments
 * Return: string
 **/

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, len = 0, len2 = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, len++)
		len += strlen(av[i]);

	str = malloc(sizeof(char) * len + 1);
	if (str == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, len2++)
			str[len2] = av[i][j];

		str[len2] = '\n';
		len2++;
	}

	str[len2] = '\0';
	return (str);

}

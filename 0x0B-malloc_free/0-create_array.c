#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - Set a size of array and fill with character
 *@size: intger of size
 *@c: char should be fill array
 *Return: array of character
 */

char *create_array(unsigned int size, char c)
{
	char *ch = malloc(size * sizeof(char));
	int i;

	i = 0;
	while (i < size)
	{
		ch[i] = c;
		i++;
	}

	ch[i] = '\0';
	return (ch);
}

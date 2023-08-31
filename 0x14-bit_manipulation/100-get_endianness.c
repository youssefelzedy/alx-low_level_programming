#include "main.h"

/**
 *get_endianness - ...
 *
 *Return: ..
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c;

	c = (char *) &i;
	if (*c == 1)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Big Endian\n");
	}

	return (0);
}

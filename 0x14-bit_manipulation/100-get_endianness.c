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
	return (*c);
}

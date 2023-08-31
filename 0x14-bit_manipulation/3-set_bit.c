#include "main.h"

/**
 *set_bit - ...
 *@n: ...
 *@index: ...
 *Return: ..
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = (1 << index);

	if (index > 31)
		return (-1);
	*n |= i;

	return (1);
}

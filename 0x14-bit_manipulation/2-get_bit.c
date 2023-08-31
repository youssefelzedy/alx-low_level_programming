#include "main.h"

/**
 *get_bit - ...
 *@n: ...
 *@index: ...
 *Return: ..
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = (1 << index);

	if (index > 31)
		return (-1);
	if ((n & i) == i)
		return (1);

	return (0);
}

#include "main.h"
/**
 * _abs - function that rerurn abs value for any number.
 * @c: is a character
 * Return: retrun 0 or 1
 */

int _abs(int c)
{
	if (c < 0)
		return (-c);
	else
		return (c);
}

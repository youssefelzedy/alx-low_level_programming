#include "main.h"
/**
 * int _islower - function that  checks for lowercase character.
 * @c: is a character
 * Return: retrun 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * Description: 'the program's description'
 * @c: is an char
 * Return : return 1 if c is uppercase, 0 elsewise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

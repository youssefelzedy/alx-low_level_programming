#include "main.h"
/**
 * _isupper - function that checks for uppercase character.
 *
 * Return : return 0 or 1 (Success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

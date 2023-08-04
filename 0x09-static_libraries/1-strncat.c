#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *_strncat -  merge two string but with n char form the sec
 *@dest: is a string
 *@src: is string
 *@n: is int
 *Return: the string
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}

#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *_strncpy -  to copy
 *@dest: is a string
 *@src: is string
 *@n: is int
 *Return: the string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}

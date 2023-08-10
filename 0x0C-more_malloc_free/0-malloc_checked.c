#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *malloc_checked - creat array
 *@b: width of the array
 *Return: ptr;
 **/

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == 0)
		exit(98);
	return (ptr);

}
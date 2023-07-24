#include "main.h"
#include <stdio.h>

/**
 *swap_int -  swap to values
 *@a: is an long int
 *@b: is an long int
 *Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

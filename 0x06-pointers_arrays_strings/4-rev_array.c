#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *reverse_array -  to copy
 *@a: is a an array
 *@n: is a size of arr
 *Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	i = 0;
	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
		i++;
	}
}

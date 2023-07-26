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
	int i;

	i = n - 1;
	while (i >= 0)
	{
		if (i != n - 1)
		{
			printf(", ");
		}

		printf("%d", a[i]);
		i--;
	}

	printf("\n");
}

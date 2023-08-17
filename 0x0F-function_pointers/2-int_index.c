#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * int_index - ...
 * @array: ...
 * @size: ...
 * @cmp: ...
 *
 * Return: Nothing.
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(arr[i]))
				return (i + 1);
		}
	}

	return (-1);
}

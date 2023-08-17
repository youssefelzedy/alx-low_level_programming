#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_iterator - prints a name as is
 * @array: array's name
 * @size: size
 * @action: func address
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size && action && array)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

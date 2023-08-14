#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_dog - function that prints a struct dog
 * @d: struct.
 *
 * Return: Nothing.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		if (d->age)
			printf("Name: %f\n", d->age);
		else
			printf("Name: (nil)\n");

		if (d->owner)
			printf("Name: %s\n", d->owner);
		else
			printf("Name: (nil)\n");
	}
}

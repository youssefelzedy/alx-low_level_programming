#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * init_dog -  initialize a variable of type
 * @d: name of struct
 * @name: name of dog
 * @age: dog's age
 * @owner: owner's name
 *
 * Return: Nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

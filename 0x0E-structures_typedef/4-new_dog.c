#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen -  print the length
 * @s: is a string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * _strcpy - copy string to another
 * @src: the main string
 * @dest: the copy
 *
 * Return: the copy @dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creat anew dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Return: struct.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dd;

	if (!name || age < 0 || !owner)
		return (NULL);
	dd = (dog_t *) malloc(sizeof(dog_t));
	if (dd == NULL)
		return (NULL);
	dd->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dd).name == NULL)
	{
		free(dd);
		return (NULL);
	}
	dd->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dd).owner == NULL)
	{
		free(dd->name);
		free(dd);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dd);
}

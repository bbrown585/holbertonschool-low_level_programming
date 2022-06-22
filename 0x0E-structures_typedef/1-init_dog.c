#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize variable of type struct dog
 * @d: pointer
 * @name: dog name
 * @age: age of dog
 * @owner: owner name
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

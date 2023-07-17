#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct dog initializing
 *
 * @owner: owner's initializing
 * @age: age's initializing
 * @name: name's initializing
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

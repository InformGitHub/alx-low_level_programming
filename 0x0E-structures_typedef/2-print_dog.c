#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - dog's printing
 * @d: dog printing
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
		d = malloc(sizeof(struct dog));
	else
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}

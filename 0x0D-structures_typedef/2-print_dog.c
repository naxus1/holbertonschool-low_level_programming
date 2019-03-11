#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - Print data the dog structure
 * @d: Struct
 *
 * Return: Print struct (Success)
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		;
	}

	if (d->name == NULL)
	{
		printf("Name: (nill)");
	}
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nill)");
	}
	else
		printf("Owner: %s\n", d->owner);
}

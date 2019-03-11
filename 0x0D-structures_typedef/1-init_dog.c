#include "dog.h"
/**
 * init_dog - Entry point
 * @d:Pointer to struct
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 * Return: Always 0 (Success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		d->age = age;
		(*d).owner = owner;
	}
}

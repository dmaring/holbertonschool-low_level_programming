#include "dog.h"

/**
 * init_dog - initialize a dog using struct in dog.h
 * @d: pointer to structure being initilialized
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner
 *
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

#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dogs (memory space)
 * @d: pointer to dog struct instance
 *
 */
void free_dog(dog_t *d)
{

	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

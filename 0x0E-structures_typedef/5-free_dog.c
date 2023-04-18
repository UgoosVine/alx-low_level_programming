#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - A function that frees dog.
 * @d: struct dog
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


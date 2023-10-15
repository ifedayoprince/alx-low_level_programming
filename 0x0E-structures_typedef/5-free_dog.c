/*
 * File: 5-free_dog.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com> */

#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees dogs.
 * @d: The dog to be freed.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}

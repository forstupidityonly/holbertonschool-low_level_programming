#include "dog.h"
/**
  * free_dog - free dogs
  * @d: the dok to be kilt
  * Return: nsw
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}

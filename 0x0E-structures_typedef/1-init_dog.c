#include "dog.h"
/**
  * init_dog - makeing puppys
  * @d: point to dog
  * @name: dog name
  * @age: age
  * @owner: owner
  * Return: no
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

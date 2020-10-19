#ifndef DOG_H
#define DOG_H
/**
  * struct dog - dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  * Description: dogs
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#include <stddef.h>
#include <stdio.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif

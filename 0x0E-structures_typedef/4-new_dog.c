#include "dog.h"
/**
  * _strdup - dup a string
  * @str: the string
  * Return: NULL if str = NULL
  */
char *_strdup(char *str)
{
	unsigned int i, j = 0;
	char *dest;

	if (str == NULL)
		return (0);
	for (i = 0; str[i]; i++)
		;
	i += 1;
	dest = malloc(i * sizeof(char));
	if (!dest)
		return (NULL);
	for (j = 0; str[j]; j++)
		dest[j] = str[j];
	dest[j] = str[j];
	return (dest);

}
/**
  * new_dog - puppy
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  * Return: yes
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;

	puppy = malloc(sizeof(dog_t));
	if (!puppy)
	{
		free(puppy);
		return (NULL);
	}
	puppy->name = _strdup(name);
	if (!puppy->name)
	{
		free(puppy);
		return (NULL);
	}
	puppy->owner = _strdup(owner);
	if (!puppy->owner)
	{
		free(puppy->name);
		free(puppy);
		return (NULL);
	}
	puppy->age = age;
	return (puppy);
}

#include "holberton.h"
/**
  * malloc_checked - check malloc
  * @b: the space
  * Return: yes
  */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}

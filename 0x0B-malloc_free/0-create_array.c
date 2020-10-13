#include "holberton.h"
/**
  * create_array - make array
  * @size: size of array
  * @c: the char to fill array
  * Return: NULL if size = 0
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (!ptr)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}

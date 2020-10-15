#include "holberton.h"
/**
  * _calloc - malloc and fill
  * @nmemb: size of data
  * @size: size
  * Return: yes
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0;
	return (ptr);
}

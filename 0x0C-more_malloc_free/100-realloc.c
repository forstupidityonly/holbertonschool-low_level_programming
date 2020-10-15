#include "holberton.h"
/**
  * _memcpy - copy mem
  * @dest: the dest
  * @src: the src
  * @n: num od bites
  * Return: aws
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *aws = dest;

	while (n-- > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (aws);
}
/**
  * _realloc - realloc
  * @ptr: the string
  * @old_size: old size
  * @new_size: new size
  * Return: yes
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *string;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	string = malloc(sizeof(char) * new_size);
	if (!string)
		return (NULL);
	if (ptr)
		_memcpy(string, ptr, old_size);
	free(ptr);
	return (string);
}

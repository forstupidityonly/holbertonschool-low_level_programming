#include "holberton.h"
/**
  * _memcpy - copy mem
  * @dest: the dest
  * @src: the src
  * @n: num od bites
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
		dest[i] = src[i];
	return (dest);
}

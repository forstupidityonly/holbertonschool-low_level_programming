#include "holberton.h"
/**
  * _memcpy - copy mem
  * @dest: the dest
  * @src: the src
  * @n: num od bites
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

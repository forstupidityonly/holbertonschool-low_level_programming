#include "holberton.h"
/**
  * _memset fill n bites of mem @ s
  * @s: the mem area
  * @b: the char
  * @n: num of bites
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	char *mem = s;

	while (n-- > 0)
		*mem++ = b;
	return (s);
}

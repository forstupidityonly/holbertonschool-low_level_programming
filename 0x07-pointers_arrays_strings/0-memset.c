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
	unsigned int i;

	for (i = 0; i <= n; i++)
		mem[i] = b;
	return (s);
}

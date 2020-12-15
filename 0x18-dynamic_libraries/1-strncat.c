#include "holberton.h"
/**
  * _strncat - cats two strings
  * @src: the src
  * @dest: the dest
  * @n: the num of bitess to use from src
  */
char *_strncat(char *dest, char *src, int n)
{
	char *i;
	char *j;
	int cnt = 0;

	for (i = dest; *i; i++)
		;
	for (j = src; *j; i++, j++, cnt++)
	{
		if (cnt < n)
			*i = *j;
		else
			return (dest);
	}
	*i = '\0';
	return (dest);
}

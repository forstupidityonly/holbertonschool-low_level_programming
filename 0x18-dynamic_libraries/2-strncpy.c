#include "holberton.h"
/**
  * _strncpy - copy a string
  * @dest: the dest
  * @src: the src
  * @n: num of bites
  */
char *_strncpy(char *dest, char *src, int n)
{
	int cnt = 0;

	while (src[cnt] && cnt < n)
	{
		dest[cnt] = src[cnt];
		cnt++;
	}
	while (cnt < n)
	{
		dest[cnt] = '\0';
		cnt++;
	}
	return (dest);
}

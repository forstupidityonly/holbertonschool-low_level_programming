#include "holberton.h"
#include <stdio.h>
/**
  * _strcpy - cpy a str
  * @dest: the dest
  * @src: the src
  * Return: char *
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

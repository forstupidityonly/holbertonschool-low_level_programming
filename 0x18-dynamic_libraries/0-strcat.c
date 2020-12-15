#include "holberton.h"
/**
  * _strcat - append src to end of dest
  * @dest: the dest
  * @src: the src
  * Return: dest
  */
char *_strcat(char *dest, char *src)
{
	char *i;
	char *j;

	for (i = dest; *i; i++)
		;
	for (j = src; *j; i++, j++)
		*i = *j;
	*i = '\0';
	return (dest);
}

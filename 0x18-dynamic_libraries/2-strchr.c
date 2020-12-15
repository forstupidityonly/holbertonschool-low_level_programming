#include "holberton.h"
#include <stddef.h>
/**
  * _strchr - string search
  * @s: the strign
  * @c: the char
  * Return: pointer to char in string
  */
char *_strchr(char *s, char c)
{
	if (s == NULL)
		return (NULL);
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
		return (s);
	return (NULL);
}

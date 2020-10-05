#include "holberton.h"
/**
  * _strpbrk -searches a string for a set of bites
  * @s: the string
  * @accept: the bites
  * Return: 0
  */
char *_strpbrk(char *s, char *accept)
{
	char i, *ptr;

	for (i = *s; i != 0; s++, i = *s)
	{
		for (ptr = accept; *ptr != 0; ptr++)
		{
			if (i == *ptr)
				return (s);
		}
	}
	return (0);
}

#include "holberton.h"
/**
  * _strlen - find the len of a string
  * @s: the pointer to the string
  * Return: the length
  */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}

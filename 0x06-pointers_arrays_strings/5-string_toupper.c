#include "holberton.h"
/**
  * string_to upper - channge lower to upper
  * @s: string
  * Return: prt to string
  */
char *string_toupper(char *s)
{
	char *ptr = s;

	while (*ptr)
	{
		if (*ptr > 'a' && *ptr < 'z')
			*ptr -= 32;
		ptr++;
	}
	return s;
}

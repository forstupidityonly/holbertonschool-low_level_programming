#include "holberton.h"
/**
  * string_toupper - channge lower to upper
  * @s: string
  * Return: prt to string
  */
char *string_toupper(char *s)
{
	char *ptr = s;

	while (*ptr)
	{
		if (*ptr > 96 && *ptr < 123)
			*ptr -= 32;
		ptr++;
	}
	return (s);
}

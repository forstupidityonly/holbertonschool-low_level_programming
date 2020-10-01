#include "holberton.h"
/**
  *
  */
char *leet(char *s)
{
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";
	char *aws = s;
	int i;

	while (*s)
	{
		for (i = 0; letters[i]; i++)
		{
			if (*s == letters[i])
				*s = numbers[i];
		}
		s++;
	}
	return (aws);
}

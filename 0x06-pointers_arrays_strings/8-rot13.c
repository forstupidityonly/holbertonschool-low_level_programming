#include "holberton.h"
/**
  * rot13 - red shift
  * @s: the string
  * Return: aws
  */
char *rot13(char *s)
{
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdevghijklmnoqrstuvwxyz";
	char *numbers = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrituvwxyzabdefghijklm";
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

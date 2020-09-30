#include "holberton.h"
/**
  * rev_string - revs a string
  * @s: the string a pointer
  * Return: no
  */
void rev_string(char *s)
{
	int i = 0;
	int j; 
	char tmp;

	while (s[i])
		i++;
	i--;
	for (j = 0; j <= i; i--, j++)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
	}
}

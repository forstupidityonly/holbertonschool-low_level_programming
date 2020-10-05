#include "holberton.h"
/**
  * _strstr - find string in string
  * @haystack: the string
  * @needle: string in a string
  * Retur`:n: pointer to string in string
  */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *i = haystack;
		char *j = needle;

		while (*haystack == *j && *j != 0 && *haystack != 0)
		{
			haystack++;
			j++;
		}
		if (*j == 0)
			return (i);
		haystack = ++i;
	}
	return (0);
}

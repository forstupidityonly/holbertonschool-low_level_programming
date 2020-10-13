#include "holberton.h"
/**
  * _strdup - dup a string
  * @str: the string
  * Return: NULL if str = NULL
  */
char *_strdup(char *str)
{
	unsigned int i, j = 0;
	char *dest;

	if (str == NULL)
		return (0);
	for (i = 0; str[i]; i++)
		;
	i += 1;
	dest = malloc(i * sizeof(char));
	if (!dest)
		return (NULL);
	for (j = 0; str[j]; j++)
		dest[j] = str[j];
	dest[j] = str[j];
	return (dest);

}

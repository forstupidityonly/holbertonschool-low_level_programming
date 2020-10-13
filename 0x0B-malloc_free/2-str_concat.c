#include "holberton.h"
/**
  * _strlen_recursion - strlen
  * @s: string
  * Return: yes
  */
int _strlen(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (0);
	if (*s != '\0')
	{
		len++;
		len += _strlen(++s);
		return (len);
	}
	return (0);
}
/**
  *
  */
char *str_concat(char *s1, char *s2)
{
	int len;
	char *str;
	unsigned int i, j;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	len = (_strlen(s1) + _strlen(s2));
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	for (j = 0; s2[j]; j++, i++)
		str[i] = s2[j];
	str[i] = '\0';
	return (str);
}

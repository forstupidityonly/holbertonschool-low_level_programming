#include "holberton.h"
/**
  * _strlen - strlen
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
  * string_nconcat - cat string to n bites
  * @s1: string 1
  * @s2: string 2
  * @n: the size of s2
  * Return: yes
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len;
	char *string;
	unsigned int i, j, x = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	len = _strlen(s1);
	string = malloc((len + n + 1) * sizeof(char));
	if (!string)
		return (NULL);
	for (i = 0; s1[i]; i++, x++)
		string[x] = s1[i];
	for (j = 0; s2[j] && j < n; j++, x++)
		string[x] = s2[j];
	string[x] = '\0';
	return (string);
}

#include "holberton.h"
/**
  * helper_five - help palendrum
  * @s: string
  * @len: len
  * Return: yes
  */
int helper_five(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
		return (helper_five(s + 1, len - 2));
	else
		return (0);
}
/**
  * _strlen - len of string
  * @s: string
  * Return: yes
  */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen(s));
}
/**
  * is_palindrome - what u thing
  * @s: the string
  * Return: yes
  */
int is_palindrome(char *s)
{
	int len;

	len = _strlen(s);
	if (len <= 1)
		return (1);
	return (helper_five(s, len));
}

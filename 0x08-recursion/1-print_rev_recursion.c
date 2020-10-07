#include "holberton.h"
/**
  * helper_one - helper to print rev
  * @s: the string
  * @len: the length
  * Return: no
  */
void helper_one(char *s, int len)
{
	if (len > 0)
	{
		_putchar(s[len]);
		len--;
		helper_one(s, len);
	}
	else if (len == 0)
		_putchar('\n');
}
/**
  * _print_rev_recursion - rev string
  * @s: the string
  * Return: no
  */
void _print_rev_recursion(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	helper_one(s, i);
}

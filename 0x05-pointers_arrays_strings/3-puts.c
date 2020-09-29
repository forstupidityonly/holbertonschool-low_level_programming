#include "holberton.h"
/**
  * _puts - print string
  * @str: the string
  * Return: no
  */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

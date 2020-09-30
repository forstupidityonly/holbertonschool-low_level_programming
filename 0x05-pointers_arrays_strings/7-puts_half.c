#include "holberton.h"
/**
  * puts_half - print second half of a string
  * @str: the string
  * Return: no
  */
void puts_half(char *str)
{
	int i = 5;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

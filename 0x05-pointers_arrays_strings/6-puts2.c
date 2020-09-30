#include "holberton.h"
/**
  * puts2 - every even char
  * @str: string
  * Return: no
  */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
			i++;
		}
		else
			i++;
	}
	_putchar('\n');
}

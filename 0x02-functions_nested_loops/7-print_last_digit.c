#include "holberton.h"
/**
  * print_last_digit - what u think betty?
  * @a: the int
  * Return: the int
  */
int print_last_digit(int a)
{
	a %= 10;
	if (a < 0)
		a = a * -1;
	else
	{
		_putchar(a + '0');
		return (a);
	}
	_putchar(a + '0');
	return (a);
}

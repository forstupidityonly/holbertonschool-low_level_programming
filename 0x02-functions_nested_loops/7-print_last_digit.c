#include "holberton.h"
/**
  * print_last_digit - what u think betty?
  * @a: the int
  * Return: the int
  */
int print_last_digit(int a)
{
	if (a < 0)
		a = a * -1;
	else if (a == 0)
	{
		_putchar(a + '0');
		return (a);
	}
	a %= 10;
	_putchar(a + '0');
	return (a);
}

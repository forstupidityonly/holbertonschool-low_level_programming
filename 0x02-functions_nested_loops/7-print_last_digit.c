#include "holberton.h"
/**
  *
  */
int print_last_digit(int a)
{
	if (a < 0)
		a *= -1;
	a %= 10;
	_putchar(a + '0');
	return (a);
}

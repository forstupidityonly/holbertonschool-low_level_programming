#include "holberton.h"
/**
  * print_numbers - print 0 - 9
  * Return: no
  */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}

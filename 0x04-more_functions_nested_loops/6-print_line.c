#include "holberton.h"
/**
  * print_line - draw a line
  * @n: line length
  * Return: no
  */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
}

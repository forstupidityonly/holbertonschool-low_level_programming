#include "holberton.h"
/**
  * print_diagonal - what u think
  * @n: diagnal length
  * Return: no
  */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i <  n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}

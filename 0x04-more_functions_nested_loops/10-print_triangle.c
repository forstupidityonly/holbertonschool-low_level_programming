#include "holberton.h"
/**
  * print_triangle - print a triangle
  * @size: size the triangle
  * Return: no
  */
void print_triangle(int size)
{
	int i;
	int j;
	int n;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > i; j--)
				_putchar(' ');
			for (n = 0; n < i; n++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else if (size <= 0)
		_putchar('\n');
}

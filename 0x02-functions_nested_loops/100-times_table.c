#include "holberton.h"
#include <stdio.h>
/**
  * print_times_table - print times table
  * @n: the int of times table
  * Return: no
  */
void print_times_table(int n)
{
	int aws;
	int i;
	int j;

	if (n >= 0 && n <= 15)
		for (i = 0; i <= n; i++)
			for (j = 0; j <= n; j++)
				aws = i * j;
				if (j == 0)
					_putchar('0');
				else if (j != 0 && aws < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(aws + '0');
				}
				else if (aws < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(aws / 10 + '0');
					_putchar(aws / 10 + '0');
				}
				else if (aws > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((aws / 10) / 10 + '0');
					_putchar((aws / 10) % 10 + '0');
					_putchar(aws % 10 + '0');
				}
			_putchar('\n');
}

#include "holberton.h"
#include <stdio.h>
/**
  * main - entry point
  * Return: no
  */
void main(void)
{
	int a = 1;
	int b = 2;
	int c = 0;
	int d = 2;

	while (c < 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
			d = c + d;
	}
	printf("%d\n", d);
}

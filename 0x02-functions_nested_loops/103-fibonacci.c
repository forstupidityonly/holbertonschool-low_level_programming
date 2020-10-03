#include "holberton.h"
#include <stdio.h>
/**
  * main - entry point
  * Return: no
  */
void main(void)
{
	long int sum = 0;
	long int a = 1;
	long int b = 2;
	long int c = 0;

	while (b < 4000000)
	{
		if (b % a == 0)
			c += a;
		c = a;
		a = b;
		b = c + b;
	}
	printf("li\n", c);
}

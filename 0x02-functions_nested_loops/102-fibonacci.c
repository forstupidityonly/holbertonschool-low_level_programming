#include "holberton.h"
#include <stdio.h>
/**
  * main - entry point
  * Return: no
  */
void main(void)
{
	long int a = 0, b = 1, c = 1;
	long int i;
	int upto = 50;
	for (i = 1; i <= upto; i++)
	{
		printf("%li", c);
		a = b;
		b = c;
		c = a + b;
		if (i < 50)
			printf(", ");
	}
	printf("\n");
}

#include "holberton.h"
#include <stdio.h>
/**
  * main - entry point
  * Return: no
  */
void main(void)
{
	unsigned long f1, f2, j;
	int i;

	f1 = 1;
	f2 = 2;
	printf("%ld, %ld, ", f1, f2);
	for (i = 0; i < 50; i++)
	{
		j = f1 + f2;
		f1 = f2;
		f2 = j;
		if (i == 50)
			printf("%ld", f2);
		else
			printf("%ld, ", f2);
	}
	printf("\n");
}

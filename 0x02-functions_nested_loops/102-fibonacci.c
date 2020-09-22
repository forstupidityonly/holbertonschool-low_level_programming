#include "holberton.h"
/**
  * mian - entry point
  * Return: no
  */
void main(void)
{
	unsigned long i, f1, f2, j;

	f1 = 1;
	f2 = 2;
	printf("1");
	for (i = 1; i < 50; i++)
	{
		printf(", %ld", f2);
		j = f1;
		f1 = f2;
		f2 = j + f2;
	}
	printf("\n");
}

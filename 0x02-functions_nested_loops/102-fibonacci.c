#include "holberton.h"
/**
  * mian - entry point
  * Return: no
  */
void main(void)
{
	unsigned long n = 50;
	unsigned long f1 = 0;
	unsigned long f2 = 1;
	unsigned long i, next;

	printf("1");
	for (i = 1; i <= n; i++)
	{
		printf(", %ld", f2);
		next = f1 + f2;
		f1 = f2;
		f2 = next;
	}
	printf("\n");
}

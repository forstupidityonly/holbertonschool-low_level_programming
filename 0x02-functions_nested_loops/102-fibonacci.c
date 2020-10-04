#include <stdio.h>
/**
  * main - entry point
  * Return: no
  */
void main(void)
{
	unsigned long i, a, b, t;

	a = 1;
	b = 2;
	printf("1");
	for (i = 1; i < 50; i++)
	{
		printf(", %ld", b);
		t = a;
		a = b;
		b = t + b;
	}
	printf("\n");
}

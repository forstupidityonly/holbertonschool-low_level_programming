#include <stdio.h>
/**
  * main - entry point
  * Return: no
  */
void main(void)
{
	int i;
	long a = 1, b = 2, c = 0;

	printf("1, 2");
	for (i = 1; i <= 48; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %d", r);
	}
	putchar('\n');
}

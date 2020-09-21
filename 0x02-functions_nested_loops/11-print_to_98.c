#include "holberton.h"
/**
  * print_to_98 - print to 98
  * Return: no
  */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	printf("98\n");
}

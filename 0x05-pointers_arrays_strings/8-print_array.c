#include "holberton.h"
/**
  * print_array - print array to n element
  * @a: the array
  * @n: the last element
  * Return: no
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}

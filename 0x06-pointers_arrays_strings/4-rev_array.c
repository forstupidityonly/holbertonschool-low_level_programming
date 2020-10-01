#include "holberton.h"
/**
  * reverse_array - rev the array of int
  * @a: the array
  * @n: the # of elements in a
  * Return: no
  */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;
	int *ptr = a;

	for (i = 0; i < (n - 1); i++)
		ptr++;
	for (i = 0; i <= n; i++)
		while (a < ptr)
		{
			tmp = *a;
			*a = *ptr;
			*ptr = tmp;
			a++;
			ptr--;
		}
}

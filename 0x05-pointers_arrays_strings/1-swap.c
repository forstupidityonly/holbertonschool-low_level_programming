#include "holberton.h"
/**
  * swap_int - a = b & b = a
  * @a: to be b
  * @b: to be a
  * Return: no
  */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

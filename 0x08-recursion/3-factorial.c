#include "holberton.h"
/**
  * factorial - what u thing
  * @n: the num
  * Return: yes
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return n * factorial(n - 1);
}

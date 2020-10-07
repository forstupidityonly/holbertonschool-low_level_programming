#include "holberton.h"
/**
  * helper_four - help prime
  * @n: int
  * @i: int
  * Return: yes
  */
int helper_four(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (helper_four(n, i - 1));
}
/**
  * is_prime_number - check prime
  * @n: the int
  * Return: yes
  */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (helper_four(n, n - 1));
}


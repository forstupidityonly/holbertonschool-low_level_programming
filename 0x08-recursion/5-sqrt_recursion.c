#include "holberton.h"
/**
  * helper_three - help sqrt
  * @i: int
  * @n: int
  * Return: yes
  */
int helper_three(int i, int n)
{
	if ((i * i) == n)
		return (i);
	if ((i * i) < n)
		return (helper_three(i + 1, n));
	if ((i * i) > n)
		return (-1);
	return (i);
}
/**
  * _sqrt_recursion - sqrt
  * @n: the int
  * Return: answer
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	else if (n > 1)
		return (helper_three(1, n));
	return (-1);
}

#include "holberton.h"
/**
  * get_bit - git bit at index
  * @n: int
  * @index: ind
  * Return: 0
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0)
		return (0);
	if (index >= 64)
		return (-1);
	n >>= index;
	return (n & 1);
}

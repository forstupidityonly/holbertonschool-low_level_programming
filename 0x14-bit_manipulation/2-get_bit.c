#include "holberton.h"
/**
  * get_bit - git bit at index
  * @n: int
  * @index: ind
  * Return: 0
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 16)
		return (-1);
	if (n == 0 && index < 64)
		return (0);
	n >>= index;
	return (n & 1);
}

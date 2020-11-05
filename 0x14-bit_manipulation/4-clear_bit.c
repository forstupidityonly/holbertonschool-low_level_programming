#include "holberton.h"
/**
  * clear_bit - set bit to 0
  * @n: int
  * @index: index
  * Return: 1 or -1
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b2 = 1, num = *n;
	unsigned int i;

	if (index > 64)
		return (-1);
	num >>= index
	if (num & 1)
	{
		for (i = 0; i < index; i++)
			b2 *= 2;
		*n -= b2
	}
	return (1);
}

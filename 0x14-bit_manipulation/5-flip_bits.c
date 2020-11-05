#include "holberton.h"
/**
  * flip_bits - 1 to 0 viceversa
  * @n: int
  * @m: int
  * Return: 0
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			i++;
		n >>= 1;
		m >>= 1;
	}
	return (i);
}

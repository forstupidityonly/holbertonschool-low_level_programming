#include "holberton.h"
/**
  * set_bit - sets bit
  * @n: var
  * @index: index
  * Return: int
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}

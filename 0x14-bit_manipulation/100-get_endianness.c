#include "holberton.h"
/**
  * get_endianness - endianness
  * Return: n
  */
int get_endianness(void)
{
	int i;
	char *j;

	i = 1;
	j = (char *)&i;
	return (*j);
}

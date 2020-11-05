#include "holberton.h"
/**
  * binary_to_uint - wut u think betty
  * @b: string of chars 1 & 0
  * Return: the converted num or 0
  * https://www.youtube.com/watch?v=9dPMb_znOwk
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		j = j << 1;
		if (b[i] != '1' && b[i] != '0')
			return (0);
		j += b[i++] - 48;
	}
	return (j);
}

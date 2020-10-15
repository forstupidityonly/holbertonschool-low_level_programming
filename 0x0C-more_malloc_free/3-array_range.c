#include "holberton.h"
/**
 * array_range - make array of integers
 * @min: min
 * @max: max
 * Return: yes
 */
int *array_range(int min, int max)
{
	int *ptr, itr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);
	for (itr = 0; min <= max; min++, itr++)
		ptr[itr] = min;
	return (ptr);
}

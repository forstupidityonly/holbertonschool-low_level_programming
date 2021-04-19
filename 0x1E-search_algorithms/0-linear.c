#include "search_algos.h"
/**
  * linear_search - an exaustive search for value, one array index at a time
  * @array: the array to search through
  * @size: the size of the array
  * @value: the value im looking for in array
  * Return: first index where value is located or -1
  */
int linear_search(int *array, size_t size, int value)
{
unsigned long int i;


/*if array is invalid*/
if (!array || size <= 0)
	return (-1);
/*0(n) in worst case*/
for (i = 0; i < size; i++)
{
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	if (array[i] == value)
		return (value);
}
/*if value is not in array*/
return (-1);
}

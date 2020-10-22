#include "function_pointers.h"
/**
  * array_iterator - array[i] to array
  * @array: the array
  * @size: size of array
  * @action: the function ptr
  * Return: no
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}

#include "holberton.h"
/**
  * main - Entre
  * Return: 0
  */
int main(void)
{
	char array[] = "Holberton";
	int i = 0;

	while (array[i])
	{
		_putchar(array[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

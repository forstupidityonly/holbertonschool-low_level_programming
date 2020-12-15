#include "holberton.h"
/**
  * _islower - test if char is lower
  * @c: char passed to test
  * Return: 0 or 1
  */

int _islower(int c)
{
	if (c > 97 && c < 122)
		return (1);
	else
		return (0);
}

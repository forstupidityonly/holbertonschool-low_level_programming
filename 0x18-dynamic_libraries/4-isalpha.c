#include "holberton.h"
/**
  * _isalpha - test if char is lower
  * @c: char passed to test
  * Return: 0 or 1
  */

int _isalpha(int c)
{
	if (c > 97 && c < 122)
		return (1);
	else if (c > 65 && c < 90)
		return (1);
	else
		return (0);
}

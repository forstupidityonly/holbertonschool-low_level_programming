#include "holberton.h"
/**
  * _isdigit - checks 0-9
  * @c: the int
  * Return: 1, 0
  */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

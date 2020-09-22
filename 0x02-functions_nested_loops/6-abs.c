#include "holberton.h"
/**
  * _abs - absolute val
  * @a: int we use
  * Return: the abs of int
  */
int _abs(int a)
{
	if (a < 0)
		return (a * -1);
	else
		return (a);
}

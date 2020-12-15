#include "holberton.h"
/**
  * _strspn - count num of accept in s
  * @s: the string
  * @accept: string of good
  * Return: num of good in s
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	for (; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (s[i] != accept[j])
			break;
	}
	return (i);
}

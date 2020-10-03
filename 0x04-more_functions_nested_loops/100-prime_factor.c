#include "holberton.h"
#include <stdio.h>
#include <math.h>
/**
  * main - entry point
  * Return: 0
  */
int main(void)
{
	int long num = 612852475143;
	int i;
	int largest = -1;

	while (num % 2 == 0)
	{
		largest = 2;
		num = num / 2;
	}
	for (i = 3; i <= sqrt(612952475143); i = i + 2)
	{
		while (num % i == 0)
		{
			largest = i;
			num = num / i;
		}
	}
	if (num > 2)
		largest = num;
	printf("%d\n", largest);
	return (0);
}

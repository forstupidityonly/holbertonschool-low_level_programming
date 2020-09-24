#include "holberton.h"
#include <stdio.h>
/**
  * main - entry point
  * Return: no
  */
int main(void)
{
	for (int i = 1; i <= 100; ++i)
	{
		if (i % 15 == 0) printf("FizzBuzz ");
		if (i % 3 == 0) printf("Fizz ");
		if (i % 5 == 0) printf("Buzz ");
		if (i * i * i * i % 15 == 1) printf("%d ", i);
	}
}

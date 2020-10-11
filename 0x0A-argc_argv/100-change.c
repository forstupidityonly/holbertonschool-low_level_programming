#include "holberton.h"
/**
  *
  */
int helper(int n)
{
	int num = 0;

	while (n / 25 > 0)
	{
		num++;
		n -= 25;
	}
	while (n / 10 > 0)
	{
		num++;
		n -= 10;
	}
	while (n / 5 > 0)
	{
		num++;
		n -= 5;
	}
	while (n / 2 > 0)
	{
		num++;
		n -= 2;
	}
	while (n / 1 > 0)
	{
		num++;
		n -= 1;
	}
	return (num);
}
/**
  *
  */
int main (int argc, char **argv)
{
	int cents;
	if (argc != 2)
	{
		printf("Error");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
		printf("0/n");
	else
		printf("%d\n", helper(cents));
	return (0);
}

#include "holberton.h"
/**
  * main -entry point
  * @argc: num
  * @argv: array
  * Return: 0
  */
int main(int argc, char **argv)
{
	int sum = 0;
	int itr = 1;
	int adder = 0;
	char *n;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (; itr < argc; itr++)
	{
		adder = strtol(argv[itr], &n, 10);
		if (*n == '\0')
			sum += adder;
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

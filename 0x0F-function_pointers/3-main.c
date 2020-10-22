#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
  * main - entry point
  * @ac: int
  * @av: array
  * Return: yes
  */
int main(int ac, char **av)
{
	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*av[2] == '/' || *av[2] == '%') && atoi(av[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(av[2]) (atoi(av[1]), atoi(av[3])));
	return (0);
}

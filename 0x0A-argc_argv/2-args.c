#include "holberton.h"
/**
  * main - entry point
  * @argc: nim
  * @argv: **
  */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

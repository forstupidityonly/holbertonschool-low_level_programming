#include <stdio.h>
/**
  * main - entry point
  * Return: 0
  */
int main(void)
{
	int lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	putchar('\n');
	return (0);
}

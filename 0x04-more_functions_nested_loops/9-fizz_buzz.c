#include <stdio.h>
/**
  * main - entry point
  * Return: no
  */
int main(void)
{
	int i;

	for  (i = 1; i < 100; i++)
	{
		if (!(i % 15))
			printf("FizzBuzz ");
		else if (!(i % 3))
			printf("Fizz ");
		else if (!(i % 5))
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");
	return (0);
}

#include <stdio.h>
/**
  * main - entry point
  * Retunr 0
  */
int main(void)
{
	int x;
	char y;

	for (x = 0; x < 16; x++)
	{
		if (x < 10)
			putchar(x + 48);
		else
		{
			y = 97 + x % 10;
			putchar(y);
		}
	}
	putchar('\n');
	return (0);
}

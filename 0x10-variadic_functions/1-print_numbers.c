#include "variadic_functions.h"
/**
  * pint_numbers - print num
  * @separator: string between nums
  * @n: num of args
  * Return: no
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list name;

	va_start(name, n);
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(name, int));
		if (count < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(name);
}

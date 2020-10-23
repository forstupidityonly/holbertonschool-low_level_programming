#include "variadic_functions.h"
/**
  * print_string - prints string
  * @separator: string to go between strings
  * @n: arg count
  * Return: no
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list name;
	char *now;

	va_start(name, n);

	for(i = 0; i < n; i++)
	{
		now = va_arg(name, char *);
		if (now != NULL)
			printf("%s", now);
		printf("(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(name);
}
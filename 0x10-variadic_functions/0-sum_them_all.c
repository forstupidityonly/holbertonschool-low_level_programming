#include "variadic_functions.h"
#include <stdarg.h>
/**
  * sum_them_all - sum al the things
  * @n: amount of args
  * @...: the args
  * Return: yes
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int count = 0;
	va_list name;

	va_start(name, n);
	if (n == 0)
		return (0);
	for (; count < n; count++)
		sum += va_arg(name, int);
	va_end(name);
	return (sum);
}

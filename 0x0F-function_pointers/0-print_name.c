#include "function_pointers.h"
/**
  * print_name - prints name
  * @name: ptr to name
  * @f: to function
  */
void print_name(char *name, void (*f)(char *))
{
	if (*f == NULL)
		return;
	f(name);
}

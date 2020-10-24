#include "variadic_functions.h"
/**
  * print_all - prints all
  * @format: the format to print
  * Return: no
  */
void print_all(const char * const format, ...)
{
	char *string;
	va_list name;
	unsigned int i = 0;
	int bianary;

	while (format)
	{
		va_start(name, format);
		while (format[i])
		{
			bianary = 1;
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(name, int));
					break;
				case 'i':
					printf("%d", va_arg(name, int));
					break;
				case 'f':
					printf("%f", va_arg(name, double));
					break;
				case 's':
					string = va_arg(name, char *);
					if (!string)
						string = "(nil)";
					printf("%s", string);
					break;
				default:
					bianary = 0;
					break;
			}
			if (format[i + 1] && bianary)
				printf(", ");
			i++;
		}
		va_end(name);
		break;
	}
	printf("\n");
}

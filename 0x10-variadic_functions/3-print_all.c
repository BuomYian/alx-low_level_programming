#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
* Return: no return
*/
void print_all(const char * const format, ...)
{
	va_list stuff;
	int i = 0;
	char *s;

	va_start(stuff, format);

	while (format && format[i])
	{
		switch (format[i++])
		{
		case 'c':
			printf("%c", va_arg(stuff, int));
			break;
		case 'i':
			printf("%d", va_arg(stuff, int));
			break;
		case 'f':
			printf("%f", (float)va_arg(stuff, double));
			break;
		case 's':
			s = va_arg(stuff, char *);
			if (!s)
				s = "(nil)";
			printf("%s", s);
			break;
		default:
			continue;
		}
		if (format[i])
			printf(", ");
	}
	printf("\n");
	va_end(stuff);
}

#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print all argument
 * @separator: item to use ot separate numbers
 * @n: number of argument to sum
 * Return: sum of all argument
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *c;


	va_list ap;

	va_start(ap, n);

	if (!separator)
		return;

	for (i = 0; i < n; i++)
	{
		c =  va_arg(ap,  char*);
		printf("%s%s", c == NULL ? "(nil)" : c, i != (n - 1) ? separator : "");
	}



	va_end(ap);
	putchar('\n');


}

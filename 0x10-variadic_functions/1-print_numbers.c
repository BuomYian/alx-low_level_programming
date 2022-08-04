#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: item to use ot separate numbers
 * @n: number of argument to sum
 * Return: sum of all argument
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

	if (!separator)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(ap, int), i != (n - 1) ? separator : "");
	}


	va_end(ap);
	putchar('\n');

}

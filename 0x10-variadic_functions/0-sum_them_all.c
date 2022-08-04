#include "variadic_functions.h"
#include <stdio.h>

/**
  *sum_them_all - function that return the sum of all its parameters
  *@n: integer to be added
  *Return: returns 0 if n equal 0
  *and return sum of parameters if n is not equal 0
  */
int sum_them_all(const unsigned int n, ...)
{
	int sum;

	if (n == 0)
	{
		return (0);
	}
	sum = sum_them_all(n, ...);
	return sum;
}

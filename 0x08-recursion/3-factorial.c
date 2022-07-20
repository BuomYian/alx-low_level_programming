#include "main.h"

/**
  *factorial - returns factorial of a number
  *@n: parameter
  *Return: return factorial
  */
int factorial(int n)
{
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}

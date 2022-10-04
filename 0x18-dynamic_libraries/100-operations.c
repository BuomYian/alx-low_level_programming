#include "operation.h"
#include <stdio.h>

/**
  *add - addition operator
  *@a: first int
  *@b: second int
  *Return: sum
  */
int add(int a, int b)
{
	return (a + b);
}

/**
  *sub - subtration operator
  *@a: first int
  *@B: second int
  *Return: sub
  */
int sub(int a, int b)
{
	return (a - b);
}

/**
  *mul - multiplication operator
  *@a: first int
  *@b: second int
  *Return: product
  */
int mul(int a, int b)
{
	return (a * b);
}

/**
  *div - division operator
  *@a: first int
  *@b: second int
  *Return: quotient
  */
int div(int a, int b)
{
	return (a / b);
}
/**
  *mod - module operation
  *@a: first int
  *@b: second int
  *Return: mod
  */
int mod(int a, int b)
{
	return (a % b);
}

#include <stdio.h>
#include "main.h"

/**
  *binary_to_unit - convert binary to unsigned int
  *@c: pointer to be converted
  *Return: the converted number or 0 if
  *more than one string in b that is not 0 or 1
  *b is NULL
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return val;
}

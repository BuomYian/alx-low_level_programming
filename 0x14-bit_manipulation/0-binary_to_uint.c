#include <stdio.h>
#include "main.h"

/**
  *binary_to_uint - convert binary to unsigned int
  *@b: pointer to be converted
  *Return: the converted number or 0 if
  *more than one string in b that is not 0 or 1
  *b is NULL
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '1')
			val = (val << 1) | 1;
		else if (*b == '0')
			val <<= 1;
		else
			return (0);
		b++;
	}
	return (val);
}

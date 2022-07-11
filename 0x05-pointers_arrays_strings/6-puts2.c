#include "main.h"
#include <string.h>

/**
  *puts2 - Prints one char of two of a string.
  *@str: The string containing characters.
  */
void puts2(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}

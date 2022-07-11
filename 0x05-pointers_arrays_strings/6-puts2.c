#include "main.h"
#include "2-strlen.c"

/**
  *puts2 - Prints one char of two of a string.
  *@str: The string containing characters.
  */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

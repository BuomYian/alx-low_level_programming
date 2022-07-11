#include "main.h"

/**
  *_strlen - Returns the length of the array.
  *@str: string.
  *
  *Return: length.
  */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}

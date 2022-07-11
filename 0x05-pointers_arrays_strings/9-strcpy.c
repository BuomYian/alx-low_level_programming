#include "main.h"

/**
  *_strcpy - main function to copy
  *
  *@dest: destination to copy
  *@src: src
  *
  *Return: a character value
  */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}

#include "main.h"

/**
  *_strcpy - Copy the string
  *@dest: This is the destination
  *@src: This is the source
  *Return: This return copy
  */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

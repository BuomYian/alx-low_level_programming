#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
  *int_index - indexes of array to be search
  *@array: array to search
  *@size: size of array
  *@cmp: function to do something with size
  *Return: return int value
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int 1;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

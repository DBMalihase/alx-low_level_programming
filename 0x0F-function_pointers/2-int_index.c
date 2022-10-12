#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - index an array
 * @array: array to go through
 * @size: size of array
 * @cmp: function to do index array
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

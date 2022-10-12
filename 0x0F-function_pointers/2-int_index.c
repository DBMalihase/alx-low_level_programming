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
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}

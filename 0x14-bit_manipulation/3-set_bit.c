#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * set_bit - check the code
 * @n: int
 * @index: int
 * Return: the value of the bit at index
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	set = 1 << index;
	*n = *n | set;
	return (1);
}

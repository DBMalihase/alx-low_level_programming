#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_endianness - check the code
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int number = 1;
	char *endian = (char *)&number;

	if (*endian == 1)
	{
		return (1);
	}
	return (0);
}

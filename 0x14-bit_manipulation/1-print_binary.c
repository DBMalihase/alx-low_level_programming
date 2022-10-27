#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - check the code
 * @n: int
 */

void print_binary(unsigned long int n)
{
	/**
	 * x >> 1 is equivalent a x / 2
	 */
	if (n > 1)
		print_binary(n >> 1);
	/**
	 * x & 1 is equivalent a x % 2
	 */
	_putchar((n & 1) + '0');
}

#include <stdio.h>
#include "main.h"
#include "6-abs.c"

/**
 * print_to_98 - print all natural numbers from input 98, in order separated by a coma followed by a space
 * @n: the number to begin counting at
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{ while (n < 98)
		printf("%d, ", n++);
		printf("%d\n", n);
	}
}

#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers from 0 t0 9
 * void: no input parameter
 * Return: 1 on success
 * On error, -1 is returned and error is set appropriately
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
}

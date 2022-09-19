#include "main.h"

/**
 * print_rev - Entry point
 * @s: the variable
 */

void print_rev(char *s)
{
	char *aux = s;

	if (s)
	{
		while (*aux)
		{
			aux++
		}
		while (s < aux--)
		{
			_putchar(*aux);
		}
		_putchar('\n');
	}
}

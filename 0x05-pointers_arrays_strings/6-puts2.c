#include "main.h"

/**
 * puts2 - print strings in par position
 * @str: variable which holds the string
 * Return: 0
 */

void puts2(char *str)
{
	int c = 0;
	int i;

	while (str[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < c; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

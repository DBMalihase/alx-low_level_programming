#include "main.h"

/**
 * _puts - Entry point
 * @str: the variable
 */

void _puts(char *str)
{
	int msg;

	for (msg = 0; *(str + msg) != '\0'; msg++)
	{
		_putchar(str[msg]);
	}
	_putchar('\n');
}

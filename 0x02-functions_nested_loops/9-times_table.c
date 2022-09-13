#include "main.h"

/**
 * print_times_table - prints the 9 times table, starting with 0
 * @n: integer to return
 */

void times_table(void)
{
	int a, b, result;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');
			result = a * b;
			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}

#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints a string
 * @separator: separator character
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strs;
	char *cur_str;
	const char *sep_cp;
	char *nil, *nil_cp;

	nil = "(nil)"
	va_start(strs, n);

	for (i = 0; i < n; i++)
	{
		cur_str = va_arg(strs, char *);
		if (cur_str != NULL)
		{
			nil_cp = nil;
			while (*nil_cp)
				putchar(*nil_cp++);
		}
		else
		{
			while (*cur_str)
			{
				putchar(*cur_str++);
			}
		}
		if (separator == NULL || *separator == '\0')
			continue;
		sep_cp = separator;
		while ((*sep_cp) && (i < (n - 1)))
			putchar(*sep_cp++);
	}
	putchar('\n');
}

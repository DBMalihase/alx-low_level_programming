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
	va_list stringArgs;
	char *strArg;

	va_start(stringArgs, n);
	for (i = 0; i < n; i++)
	{
		strArg = va_arg(stringArgs, char *);
		if (separator != NULL && i > 0)
			printf("%s", separator);
		if (strArg == NULL)
			printf("(nil)");
		else
			printf("%S", strArg);
	}
	va_end(stringArgs);
	printf("\n");
}

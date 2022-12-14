#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct op - structure to hold function and character key
 * @c: abbreviation for type, i=integer, c=character, f=float, s=string
 * @f: pointer to function for proper print statement
 * Description: key:value, char:function, e.g.:'c':_print_char
 */

typedef struct op
{
	char *c;
	int (*f)(va_list a);
}
printer;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int print_c(va_list a);
int print_i(va_list a);
int print_f(va_list a);
int print_s(va_list a);

#endif

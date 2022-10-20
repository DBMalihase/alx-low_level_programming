#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdlib.h>
#include <stdio.h>

int int_index(int *array, int size, int (*cmp)(int));
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int _putchar(char c);

#endif
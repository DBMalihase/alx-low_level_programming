#include "main.h"

/**
 * swap_int - Entry point
 * @a: input value
 * @b: input another value
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

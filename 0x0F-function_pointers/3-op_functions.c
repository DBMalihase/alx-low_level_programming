#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds 5 functions
 * @a: int a
 * @b: int b
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts a and b
 * @a: int a
 * @b: int b
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: int a
 * @b: int b
 * Return: multiple of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide a and b
 * @a: int a
 * @b: int b
 * Return: division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulos of a and b
 * @a: int a
 * @b: int b
 * Return: modulos of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}

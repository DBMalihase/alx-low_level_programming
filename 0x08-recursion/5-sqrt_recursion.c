#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: character
 * Return: count
 */

int _sqrt_recursion(int n)
{
	float square_root(int, float);
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (square_root(n, 2));
}

/**
 * square_root - returns the natural square root of a number
 * @n: description of parameter
 * @count: description of parameter
 * Return: -1 if n does not have a natural square root
 */

float square_root(int n, float count)
{
	if ((count * count) > n)
	{
		return(-1);
	}
	if (n / count != count)
	{
		return (square_root(n, count + 1));
	}
	else
	{
		return (count);
	}
}

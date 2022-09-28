#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number
 * @n: number to use
 * Return: factor or -1
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n ==)
	{
		return (1);
	}
	return (-1);
}

#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: 1 on sucess, -1 on error and errno is set aproximatly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

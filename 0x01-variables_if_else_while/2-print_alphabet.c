#include <stdio.h>

/**
 * main -entry point
 *
 * Return: 0 always
 *
 */
int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
		putchar(abc);
	putchar('\n');
	return (0);
}

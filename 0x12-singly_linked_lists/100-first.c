#include <stdio.h>

void message(void) __attribute__((constructor));

/**
 * message - function that runs befor main
 */

void message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

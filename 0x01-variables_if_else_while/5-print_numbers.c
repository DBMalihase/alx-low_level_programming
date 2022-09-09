#include <stdio.h>
/**
 * main - entry point
 * Return: 0 always
 */
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}

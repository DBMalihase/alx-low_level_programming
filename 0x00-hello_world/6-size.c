#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints sizes of different types in c
 *
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("SIze of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(li));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
	printf("Sizze of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}

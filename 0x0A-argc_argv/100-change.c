#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main program that prints the minimum number of coins to make change
 * @argc: integer
 * @argv: character
 * change amount o find num coins needed for
 * Return: 0
 */

int main(int argc, char *argv[])
{
	/**
	 * find the minimum number of coins to change the amount of money
	 * passed by argument
	 * if 10 passes, a single single dime is needed = 1
	 * for 100 4 quarters = 4
	 * 101 4 quarters and one penny = 5
	 * for 13 a dime 2 2 cent coin and one penny = 3
	 */

	int change;
	int coins;

	coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	while (change > 0)
	{
		if (change >= 25)
			change = change - 25;
		else if (change >= 10)
			change = change - 10;
		else if (change >= 5)
			change = change - 5;
		else if (change >= 2)
			change = change - 2;
		else
			change = change - 1;
		coins++;
	}
	printf("%i\n", coins);
	return (0);
}

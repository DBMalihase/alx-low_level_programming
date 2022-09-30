#include "main.h"

/**
 * _strlen - Entry point
 * @s: give me the word
 * Return: gave large
 */

int _strlen(char *s)
{
	int large = 0;

	while (*(s + large) != '\0')
	{
		large++;
	}
	return (large);
}

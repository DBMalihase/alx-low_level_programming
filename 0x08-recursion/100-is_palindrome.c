#include "main.h"
#include <stdio.h>

/**
 * _strlen - entry point
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

/**
 * palin - compare a string(first letter and the last)
 * @s: string
 * @len: size of the string
 * @i: position of the string
 * Return: Returns 1 if a string is a palindrome and 0 if not
 */

int palin(char *s, int len, int i)
{
	if (i < len)
	{
		if (*(s + i) == *(s + len))
		{
			return (palin(s, len - 1, i + 1));
		}
		else if (*(s + i) != *(s + len))
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - sequence of characters which reads the same backward as forward
 * @s: string
 * Return: returns 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int size = _strlen(s) - 1;
	return (palin(s, size, 0));
}

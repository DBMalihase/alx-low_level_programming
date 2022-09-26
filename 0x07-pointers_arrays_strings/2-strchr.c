#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locate character in string
 * @s: pointer
 * @c: variable desing
 * Return: character value
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}

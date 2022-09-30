#include "main.h"

/**
 * _strncat - entry point
 * @dest: variable which will hold the string
 * @src: variable which holds the string
 * @n: int
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *destPointer = dest;
	int len = 0;

	if (dest == 0)
	{
		return (0);
	}
	while (*dest)
	{
		len++;
		dest++;
	}
	dest = destPointer;
	for (i = 0; i < n && src[i]; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}

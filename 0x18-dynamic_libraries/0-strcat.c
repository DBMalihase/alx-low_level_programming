#include "main.h"

/**
 * _strcat - Entry point
 * @dest: variable which will hold the string
 * @src: variable which holds the string
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	char *aux = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (aux);
}

#include "main.h"
#include <stdio.h>

/**
 * set_string - function that sets the value of a pointer to char
 * @s: string to set
 * @to: value to set to
 */

void set_string(char **s, char *to)
{
	*s = to;
}

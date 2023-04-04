#include <stdio.h>

/**
 * set_string - value of a pointer to a char
 * @s: move to pointer
 * @to: char
 * Return: Null
 */

void set_string(char **s, char *to)
{
	while (*to)
	{
		*(*s)++ = *to++;
	}
	*(*s) = '\0';
}

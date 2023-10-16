#include <stdio.h>
#include <string.h>

/**
 * _strspn - Locate in strings
 * @s: First Occurrance
 * @accept: Consist of Byte
 * Return: return to s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}
	return (count);
}

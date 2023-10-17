#include <stdio.h>

/**
 * _memcpy - functions for copy
 * @src: Memory Area
 * @n: Copy
 * @dest: memory area
 * Return: return to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*p++ = *src++;
	}
	return (dest);
}

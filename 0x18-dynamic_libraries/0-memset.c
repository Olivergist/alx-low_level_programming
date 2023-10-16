#include "main.h"
/**
 *_memset - function fills the first memory
 *@s: Must be filled
 *@b: must be copied
 *@n: numbner must be copied too
 *
 *Return: function returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}

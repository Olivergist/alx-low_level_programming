#include <stdio.h>

/**
 * _strpbrk - locates the first occurrence
 * @s: First Occurrance
 * @accept: Consist of Byte
 * Return: return to NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		p = accept;

		while (*p != '\0')
		{
			if (*p == *s)
			{
				return(s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}

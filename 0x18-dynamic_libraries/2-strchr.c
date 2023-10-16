#include <stdio.h>

/**
 * _strchr - Locate in strings
 * @s: First Occurrance
 * @c: Character in String
 * Return: return to NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}

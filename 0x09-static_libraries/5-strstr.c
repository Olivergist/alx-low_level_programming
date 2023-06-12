#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *v = needle;

		while (*i == *v && *v != '\0')
		{
			i++;
			v++;
		}

		if (*v == '\0')
			return (haystack);
	}

	return (0);
}


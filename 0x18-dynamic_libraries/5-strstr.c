#include <stdio.h>
#include <string.h>

/**
 * _strstr - locates the first occurrence
 * @haystack: First Occurrance
 * @needle: Consist of Byte
 * Return: return to NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int needle_length = strlen(needle);

	if (needle_length == 0)
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			if (strncmp(haystack, needle, needle_length) == 0)
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (NULL);
}

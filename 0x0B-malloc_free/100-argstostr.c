#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments into a single string
 * @ac: number of arguments
 * @av: double pointer to the array of arguments
 *
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, total_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		total_len += len + 1; /* Add 1 for newline character */
		len = 0;
	}

	str = malloc(sizeof(char) * total_len + 1);
	if (str == NULL)
		return (NULL);


	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[len] = av[i][j];
			len++;
		}
		str[len] = '\n';
		len++;
	}

	str[len] = '\0';

	return (str);
}


#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the command-line arguments
 *
 * Return: 0 upon successful execution, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;


	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}


	for (i = 1; i < argc; i++)
	{
		int j;
		bool isNumber = true;


		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				isNumber = false;
				break;
			}
		}

		if (!isNumber)
		{
			printf("Error\n");
			return (1);
		}


		sum += atoi(argv[i]);
	}


	printf("%d\n", sum);

	return (0);
}


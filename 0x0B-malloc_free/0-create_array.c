#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars and initializes it with a specific
 * @size: the size of the array
 * @c: the char value to initialize the array with
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{

	if (size == 0)
	{
		return (NULL);
	}

	char *array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}


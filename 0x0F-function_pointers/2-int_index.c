#include "function_pointers.h"

/**
 * int_index - Search for an element in an array using a comparison function.
 * @array: Pointer to an integer array.
 * @size: Number of elements in the array.
 * @cmp: Pointer to a function that takes an integer argument
 *
 * Return: Index of the matched element, or -1 if not found or invalid input.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}


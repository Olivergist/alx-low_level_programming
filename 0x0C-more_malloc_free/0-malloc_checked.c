#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Number of bytes to allocate
 *
 * Return: Allocated memory, or exit with status 98 if allocation fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}


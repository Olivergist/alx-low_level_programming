#include "main.h"
#include <unistd.h>

/**
 * _putchar - character written to c to stdout
 * @c: Character print
 *
 * Return: success 1.
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


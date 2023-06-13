#include <stdio.h>
#include "main.h"

/**
 * _putchar - character writes c to stdout
 * @c:The character must print
 *
 * Return: On success 1.
 * On error, -1 is returned and set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

#include "main.h"
#include <unistd.h>

/**
 *_putchar - charcater will be written to stdout from c
 *@c: Print character
 *Return: On success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

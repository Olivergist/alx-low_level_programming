#include "main.h"

/**
 * _puts_recursion - Using this to call the function
 *
 * @s: print a string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}

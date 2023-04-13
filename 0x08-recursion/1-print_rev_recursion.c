#include "main.h"
/**
 * _print_rev_recursion - Use to call function
 *
 * @s: Print string in reverse
 **/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}

}

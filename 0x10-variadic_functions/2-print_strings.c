#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Displays a series of strings, followed by a new line.
 * @separator: The string used to separate the strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be displayed.
 *
 * Description: If the separator is set to NULL, it will not be displayed.
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int index;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}

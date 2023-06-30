#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - Calculates the sum of it's parameters
 *@n: the count of parameters passed to the function
 *@...: A variable number of parameters to be included in tht sum
 *
 *Return: the function returns 0 if n is equal to 0
 **/

#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}


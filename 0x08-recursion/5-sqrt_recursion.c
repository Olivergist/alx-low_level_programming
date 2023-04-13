#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 *
 * @n: The number to find the square root of
 *
 * Return: The square root of the number, or -1
 **/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	{
		int i = 1; i

		while (i * i < n)
			i++;
		if (i * i == n)
			return (i);
			return (-1);
	}
}

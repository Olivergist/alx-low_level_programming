#include "main.h"

int sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number to find the square root of
 *
 * Return: the natural square root, or -1 if n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (sqrt_helper(n, 0));
}

/**
 * sqrt_helper - helper function to recursively find the square root
 *
 * @n: the number to find the square root of
 * @i: the current value to check
 *
 * Return: the natural square root of n
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (sqrt_helper(n, i + 1));
}

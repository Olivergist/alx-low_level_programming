#include "main.h"
int is_prime_helper(int n, int div);

/**
 * is_prime_number - checks if a number is prime
 *
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
/**
 * is_prime_helper - helper function to check if a number is prime
 *
 * @n: the number to check
 * @div: the divisor to check n against
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int div)
{
	if (n < 2)
		return (0);
	if (div > n / 2)
		return (1);
	if (n % div == 0)
		return (0);
	return (is_prime_helper(n, div + 1));
}

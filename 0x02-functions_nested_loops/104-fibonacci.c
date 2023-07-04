#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int fib1 = 1;
	unsigned int fib2 = 2;

	printf("%u, %u", fib1, fib2);

	int i;

	for (i = 3; i <= 98; i++)
	{
		unsigned int fib = fib1 + fib2;

		printf(", %u", fib);

		fib1 = fib2;
		fib2 = fib;
	}

	printf("\n");

	return (0);
}


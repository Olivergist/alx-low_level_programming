#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: Always (0)
 */
int main(void)
{
	unsigned long fib1 = 1;
	unsigned long fib2 = 2;
	unsigned long sum = 0;

	while (fib1 <= 4000000)
	{
		unsigned long next_fib = fib1 + fib2;

		if (fib1 % 2 == 0)
		{
			sum += fib1;
		}

		fib1 = fib2;
		fib2 = next_fib;
	}

	printf("%lu\n", sum);

	return (0);
}


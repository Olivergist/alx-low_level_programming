#include <stdio.h>
#include <stdlib.h>

#define ERROR_MSG "Error"

/**
 * is_digit - Checks if a string contains only digits.
 * @s: String to be evaluated.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}

	return (1);
}

/**
 * multiply - Multiplies two positive numbers.
 * @num1: First number.
 * @num2: Second number.
 *
 * Return: The result of the multiplication.
 */
unsigned int multiply(unsigned int num1, unsigned int num2)
{
	if (num2 == 0)
		return (0);

	return (num1 + multiply(num1, num2 - 1));
}

/**
 * main - Entry point of the program.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, 1 otherwise.
 */
int main(int argc, char *argv[])
{
	unsigned int num1, num2, result;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("%s\n", ERROR_MSG);
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = multiply(num1, num2);

	printf("%u\n", result);

	return (0);
}


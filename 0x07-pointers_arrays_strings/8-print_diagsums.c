#include <stdio.h>

/**
 * print_diagsums - two diagonals of a square matrix of integers.
 * @a: matrix of intergers
 * @size: Size of the matrix
 * Return: return
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - 1 - i));
	}
	printf("Sum of diagonal 1 = %d\n", sum1);
	printf("Sum of diagonal 2 = %d\n", sum2);
}

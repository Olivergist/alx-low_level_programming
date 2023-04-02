#include <stdio.h>

/**
 * main - Entry
 * Description: Print in Three Digits
 * Return: Always 0
 */

int main(void)
{
	int i = 0, j = 1, k = 2;

	while (i < 9)

	{
		putchar(i + '0');
		putchar(j + '0');
		putchar(k + '0');
		if (i != 8 || j != 9 || k != 10)
		{
			putchar(',');
			putchar(' ');
		}
		j++;
		if (j > 9)
		{
			i++;
			j = i + 1;
		}
	}
	putchar('\n');
	return (0);
}

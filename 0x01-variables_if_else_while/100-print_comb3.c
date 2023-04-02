#include <stdio.h>

/**
 * main - Entry
 * Description: Print in Two Digits
 * Return: Always 0
 */

int main(void)
{
	int i = 0, j = 1;

	while (i < 9)

	{
		putchar(i + '0');
		putchar(j + '0');
		if (i != 8 || j != 9)
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

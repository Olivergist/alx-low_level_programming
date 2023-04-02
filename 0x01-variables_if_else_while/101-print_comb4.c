#include <stdio.h>

/**
 * main - Entry
 * Description: Print in Three Digits
 * Return: Always 0
 */

int main(void)
{
	int i = 0, j = 1, k = 2;

	while (i <= 7)
	{
		putchar(i + '0');
		putchar(j + '0');
		putchar(k + '0');
		if (++k > 9)
		{
			k = ++j + 1;
			if (k > 9)
			{
				j = ++i + 1;
				k = j + 1;
			}
		}
		if (i < 7 || j < 8 || k < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}

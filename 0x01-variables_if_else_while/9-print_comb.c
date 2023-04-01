#include <stdio.h>

/**
 * main - Entry
 * Description: Print in Single number
 * Return: Always 0
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 10)

	{
		putchar(i + '0');
		i++;
		if (i < 10)

		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

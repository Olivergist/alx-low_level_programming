#include <stdio.h>

/**
 * main - Entry
 * Description: Print in Base16
 * Return: Always 0
 */

int main(void)
{
	char *hex_digits = "0123456789abcdef";
	char *p = hex_digits;

	while (*p)
	{
		putchar(*p);
		p++;
	}
	putchar('\n');
	return (0);
}


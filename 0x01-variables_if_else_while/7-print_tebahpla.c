#include <stdio.h>
/**
 * main - Entry
 * Description: Print in lowcase
 * Return: Always 0
 */

int main(void)
{
	char vic = 'z';

	while (vic >= 'a')
	{
		putchar(vic);
		vic--;
	}
	putchar('\n');
	return (0);
}

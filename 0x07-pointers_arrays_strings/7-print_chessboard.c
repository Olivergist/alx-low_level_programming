#include <stdio.h>

/**
 * print_chessboard - Print chessboard
 * @a: First Occurrance
 * Return: return
 */

void print_chessboard(char (*a)[8])

{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
			putchar(' ');
		}
		putchar('\n');
	}
}

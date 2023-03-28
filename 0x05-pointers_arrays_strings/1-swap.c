#include "main.h"
/**
*swap_int - Two Variables
*@author Victor
*@a: swap and store
*@b: swap and store
*Return: Always 0
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>
/**
 * mian - Entry Point
 * Description: 'print number of base 10'
 * Return: AAlways 0
 */
int main(void)
{
int n;
for (n = 0; n <= 9; n++)
{
putchar(n + 48);
}
putchar('\n');
return (0);
}

#include "main.h"
#include <unistd.h>
/**
 * _putchar - stdout brings out everything  it receives
 * @c: Print Character
 *
 * Return: On success 1.
 * On error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1,&c,1));
}

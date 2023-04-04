#include "main.h"
#include <string.h>

/**
 * set_string - value of a pointer to a char
 * @s: move to pointer
 * @to: char
 */

void set_string(char **s, char *to)
{
	*s = to;
}

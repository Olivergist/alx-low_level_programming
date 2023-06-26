#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name - Pointer to Function must print name
 *@name:add string
 *@f:pointer will function
 *Return:nothing
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

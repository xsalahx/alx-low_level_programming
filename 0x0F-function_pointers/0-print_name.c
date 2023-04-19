#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name : name to print
 * @f: print function to use
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		(*f)(name);
}

#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name : name to print
 * @f: print function to use
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

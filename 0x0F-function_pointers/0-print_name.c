#include "function_pointers.h"
#include <string.h>
#include <stdlib.h>
/**
 * print_name - print name
 * @name: name to be printed
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}


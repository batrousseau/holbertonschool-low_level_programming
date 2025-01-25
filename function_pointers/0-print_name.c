#include "function_pointers.h"

/**
* print_name - print a name
* @name: name as a string
* @f: pointer to functions that choose the way
* the name should be printed
*/


void print_name(char *name, void (*f)(char *))
{
f(name);
}

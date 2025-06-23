#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int, ...);
void print_strings(const char *separator, const unsigned int, ...);
void print_all(const char * const format, ...);

/**
 * struct type - link a char and a function pointer
 * @x: a char
 * @fp: a function pointer taking a variadic list as parameter
 */

typedef  struct type
{
	char x;
	void (*fp)(va_list arg);
} type_a;
#endif

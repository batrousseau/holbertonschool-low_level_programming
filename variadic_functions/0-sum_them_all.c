#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all parameters
 * @n: the number of parameters that the functions supports
 * Return: an int as sums of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i = 0;
int total = i;

if (n == 0)
{
	return (0);
}

va_start(args, n);
for (i = 0; i < n; i++)
{
	total += va_arg(args, int);
}
va_end(args);

return (total);

}

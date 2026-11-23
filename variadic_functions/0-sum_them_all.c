#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of parameters passed after n
 *
 * Return: the sum, or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	sum = 0;
	i = n;
	va_start(ap, n);
	while (i != 0)
	{
		sum = sum + va_arg(ap, int);
		i--;
	}
	va_end(ap);
	return (sum);
}

#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	i = n;
	va_start(ap, n);
	while (i != 0)
	{
		printf("%d", va_arg(ap, int));
		if (i != 1 && separator != NULL)
			printf("%s", separator);
		i--;
	}
	va_end(ap);
	printf("\n");
}

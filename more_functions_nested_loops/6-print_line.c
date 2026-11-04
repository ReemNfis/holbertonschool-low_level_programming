#include "main.h"

/**
 * print_line - draws a straight line of n underscores, then a new line
 * @n: the length of the line to print
 *
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}

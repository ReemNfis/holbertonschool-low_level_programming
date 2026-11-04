#include "main.h"

/**
 * print_line - prints a line of the specified length, The line should end with a \n
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
    _putchar('$');
}

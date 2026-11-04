#include "main.h"

/**
 * print_diagonal - draws a diagonal line of n backslashes, then a new line
 * @n: the length of the line to print
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n <= 0)
		_putchar('\n');
	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}

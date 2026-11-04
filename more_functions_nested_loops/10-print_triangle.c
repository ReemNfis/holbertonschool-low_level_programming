#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle of #, then a new line
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			_putchar(' ');
			j++;
		}
		j = 0;
		while (j <= i)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}

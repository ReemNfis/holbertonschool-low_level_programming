#include "main.h"

/**
 * print_numbers - prints the numbers 0-9, then a new line
 *
 * Return: void
 */
void print_numbers(void)
{
	char a;

	a = '0';
	while (a <= '9')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

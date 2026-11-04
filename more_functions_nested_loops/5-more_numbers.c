#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 0-14, then a new line
 *
 * Return: void
 */
void more_numbers(void)
{
	int a;
	int i;

	i = 0;
	while (i < 10)
	{
		a = 0;
		while (a <= 14)
		{
			if (a > 9)
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			a++;
		}
		_putchar('\n');
		i++;
	}
}

#include "main.h"

/**
 * puts2 - prints every other character of a string, followed by a new line
 * @s: pointer to the string
 *
 * Return: Nothing.
 */
void puts2(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		if (len % 2 == 0)
			_putchar(s[len]);
		len++;
	}
	_putchar('\n');
}

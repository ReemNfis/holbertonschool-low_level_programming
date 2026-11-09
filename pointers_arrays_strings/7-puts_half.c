#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a new line
 * @s: pointer to the string
 *
 * Return: Nothing.
 */
void puts_half(char *s)
{
	int len = 0;
    int n;

    while (s[len] != '\0')
    {
        len++;
    }

    n = len - ((len + 1) / 2);

    while (n < len)
    {
        _putchar(s[n]);
        n++;
    }
	_putchar('\n');
}

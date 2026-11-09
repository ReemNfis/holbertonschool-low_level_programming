#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	int x;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	x = len - ((len + 1) / 2);

	while (i < x)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
		i++;
	}
}

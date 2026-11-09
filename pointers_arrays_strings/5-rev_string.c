#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string to reverse
 *
 * Return: nothing.
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	int half;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	half = len / 2;

	while (i < half)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
		i++;
	}
}

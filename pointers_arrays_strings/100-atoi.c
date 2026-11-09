#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value, or 0 if no digits are found
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;
	int digit_seen = 0;

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			digit_seen = 1;
			num = num * 10 + (*s - '0');
		}
		else
		{
			if (digit_seen)
				break;

			if (*s == '-')
				sign = -sign;
		}
		s++;
	}

	if (digit_seen == 0)
		return (0);

	return (num * sign);
}

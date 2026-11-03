#include <stdio.h>

/**
 * main - prints all single digit numbers using putchar only, no char variables
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	number = 0;
	while (number < 10)
	{
		putchar(number + '0');
		number++;
	}
	putchar('\n');
	return (0);
}

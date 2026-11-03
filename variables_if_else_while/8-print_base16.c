#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char symbol;

	symbol = '0';
	while (symbol <= '9')
	{
		putchar(symbol);
		symbol++;
	}

	symbol = 'a';
	while (symbol <= 'f')
	{
		putchar(symbol);
		symbol++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 * @argc: number of command-line arguments, including the program name
 * @argv: array of the command-line arguments (unused)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

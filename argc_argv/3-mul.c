#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers and prints the result
 * @argc: number of command-line arguments, including the program name
 * @argv: array of the command-line arguments
 *
 * Return: 0 on success, 1 if the program does not receive two arguments
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}

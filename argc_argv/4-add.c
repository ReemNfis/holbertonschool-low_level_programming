#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers and prints the result
 * @argc: number of command-line arguments, including the program name
 * @argv: array of the command-line arguments
 *
 * Return: 0 on success, 1 if an argument contains a non-digit character
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

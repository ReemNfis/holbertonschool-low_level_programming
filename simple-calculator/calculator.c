#include <stdio.h>

/**
 * main - Entry point of the simple calculator program
 *
 * Prints a welcome line, displays the menu, reads the user's
 * choice and exits cleanly when 0 (Quit) is selected.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice;

	printf("Simple Calculator\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");

	printf("Choice: ");
	if (scanf("%d", &choice) != 1)
	{
		printf("Bye!\n");
		return (0);
	}

	if (choice == 0)
	{
		printf("Bye!\n");
		return (0);
	}

	/* Operations are wired up in later tasks */
	printf("Not implemented yet.\n");
	return (0);
}

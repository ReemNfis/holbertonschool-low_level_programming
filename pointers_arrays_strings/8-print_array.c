#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the elements of an array
 * @array: the array to print
 * @n: the number of elements in the array
 *
 * Return: Nothing
 */
void print_array(int *array, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", array[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}

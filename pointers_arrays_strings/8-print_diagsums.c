#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix (stored row-major)
 * @size: the number of rows and columns of the square matrix
 *
 * Description: The matrix is flattened row-major, so the element at
 * row i, column j is a[i * size + j]. Sums the main diagonal
 * (top-left to bottom-right) and the anti-diagonal (top-right to
 * bottom-left), then prints both separated by a comma and a space,
 * followed by a newline.
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int main_sum = 0;
	int anti_sum = 0;

	for (i = 0; i < size; i++)
	{
		main_sum += a[i * size + i];
		anti_sum += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", main_sum, anti_sum);
}

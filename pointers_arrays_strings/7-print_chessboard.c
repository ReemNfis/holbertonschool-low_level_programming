#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to an 8x8 array of chars (one row per array)
 *
 * Description: Prints the 8 rows of the board, each followed by a
 * newline, one character at a time using _putchar.
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}

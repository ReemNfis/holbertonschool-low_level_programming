#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: destination string (must have enough space)
 * @src: source string to append
 * @n: maximum number of bytes to copy from src
 *
 * Description: Appends at most n bytes from src to the end of dest,
 * overwriting the terminating null byte of dest, and then adds a
 * terminating null byte.
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* Find the end of dest */
	while (dest[i] != '\0')
		i++;

	/* Copy at most n bytes from src, stopping at src's null byte */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Null-terminate the result */
	dest[i] = '\0';

	return (dest);
}

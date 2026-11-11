#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination buffer
 * @src: source string
 * @n: maximum number of bytes to copy
 *
 * Description: Copies at most n bytes from src into dest. If src is
 * shorter than n, dest is padded with null bytes up to n. If src is
 * n bytes or longer, dest is not null-terminated.
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy up to n bytes from src */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Pad with null bytes if src is shorter than n */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

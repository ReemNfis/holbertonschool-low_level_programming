#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 *
 * Description: Copies n bytes from the memory area pointed to by src
 * into the memory area pointed to by dest.
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates s1 with the first n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to use
 *
 * Description: a NULL string is treated as an empty string.
 *
 * Return: pointer to the new string, or NULL if malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	p = malloc(len1 + n + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];

	for (j = 0; j < n; j++)
		p[i + j] = s2[j];

	p[i + j] = '\0';
	return (p);
}

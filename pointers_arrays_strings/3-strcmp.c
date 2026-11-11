#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Description: Compares s1 and s2 byte by byte (as unsigned char).
 * Returns the difference between the first pair of bytes that differ,
 * or 0 if the strings are identical.
 *
 * Return: negative if s1 < s2, positive if s1 > s2, 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/* Walk both strings while they match and s1 hasn't ended */
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;

	/* Return the difference of the first differing byte */
	return (s1[i] - s2[i]);
}

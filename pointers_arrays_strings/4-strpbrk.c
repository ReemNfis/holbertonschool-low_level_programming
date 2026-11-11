#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to scan
 * @accept: the set of bytes to look for
 *
 * Description: Locates the first occurrence in s of any byte that also
 * appears in accept, and returns a pointer to that byte in s.
 * Returns NULL if no such byte is found.
 *
 * Return: pointer to the matching byte in s, or NULL if none found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (NULL);
}

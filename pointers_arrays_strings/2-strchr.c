#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to look for
 *
 * Description: Returns a pointer to the first occurrence of the
 * character c in the string s, or NULL if c is not found.
 * If c is '\0', returns a pointer to the terminating null byte.
 *
 * Return: pointer to the first occurrence of c, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
		return (s);

	return (NULL);
}

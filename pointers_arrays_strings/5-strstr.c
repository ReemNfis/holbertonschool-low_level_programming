#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to search in
 * @needle: the substring to look for
 *
 * Description: Finds the first occurrence of the substring needle in
 * the string haystack. The terminating null bytes are not compared.
 * If needle is empty, returns haystack (matching standard strstr).
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		/* Try to match needle starting at haystack[i] */
		for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
			;

		if (needle[j] == '\0')
			return (haystack + i);
	}

	/* Empty needle with empty haystack */
	if (needle[0] == '\0')
		return (haystack);

	return (NULL);
}

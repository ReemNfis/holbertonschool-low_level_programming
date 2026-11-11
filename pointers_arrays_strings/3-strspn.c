#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to scan
 * @accept: the set of bytes allowed in the prefix
 *
 * Description: Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept. The scan stops at the first
 * character of s that is not in accept (or at s's terminating null byte).
 *
 * Return: the number of bytes in the initial matching segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;
	int found;

	while (s[i] != '\0')
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}

		if (!found)
			break;

		i++;
	}

	return (i);
}

#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to encode (modified in place)
 *
 * Description: Replaces:
 *   a/A -> 4, e/E -> 3, o/O -> 0, t/T -> 7, l/L -> 1
 *
 * Constraints respected:
 *   - only one `if`
 *   - only two loops
 *   - no `switch`
 *   - no ternary operator
 *
 * Return: pointer to the modified string s
 */
char *leet(char *s)
{
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
				s[i] = numbers[j];
		}
	}

	return (s);
}

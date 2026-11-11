#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: the string to convert (modified in place)
 *
 * Description: Walks the string, and for every character in the range
 * 'a'..'z', subtracts 32 (the ASCII offset between lowercase and
 * uppercase letters) to turn it into its uppercase equivalent.
 * All other characters are left untouched.
 *
 * Return: pointer to the modified string s
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;   /* or: s[i] -= ('a' - 'A'); */
		i++;
	}

	return (s);
}

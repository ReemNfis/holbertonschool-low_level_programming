#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string to modify (in place)
 *
 * Description: A word starts at the beginning of the string or right
 * after any of these separators:
 *   space, tab, newline, ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'
 * The first character of each word is uppercased if it is a
 * lowercase letter.
 *
 * Return: pointer to the modified string s
 */
char *cap_string(char *s)
{
	int i = 0;
	int sep = 1;  /* start of string counts as "after a separator" */

	while (s[i] != '\0')
	{
		/* Capitalize a lowercase letter that begins a new word */
		if (sep && s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;

		/* Update: was the current character a separator? */
		sep = (s[i] == ' '  || s[i] == '\t' || s[i] == '\n' ||
		       s[i] == ','  || s[i] == ';'  || s[i] == '.'  ||
		       s[i] == '!'  || s[i] == '?'  || s[i] == '"'  ||
		       s[i] == '('  || s[i] == ')'  || s[i] == '{'  ||
		       s[i] == '}');

		i++;
	}

	return (s);
}

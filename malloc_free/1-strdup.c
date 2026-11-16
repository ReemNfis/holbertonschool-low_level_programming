#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies a string into newly allocated memory
 * @str: the string to copy
 *
 * Return: pointer to the copy, or NULL if str is NULL or malloc fails
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int len;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	dup = malloc(len + 1);
	if (dup == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[len] = '\0';
	return (dup);
}

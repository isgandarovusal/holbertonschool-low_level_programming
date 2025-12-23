#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string, or NULL if str = NULL
 * or if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	/* Calculate length of string */
	len = 0;
	while (str[len] != '\0')
		len++;

	/* Allocate memory for duplicate (len + 1 for null terminator) */
	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	/* Copy string */
	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}

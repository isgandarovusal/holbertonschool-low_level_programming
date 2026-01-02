#include "main.h"

/**
 * _strpbrk - search string for set of bytes
 * @s: source string
 * @accept: accepted characters
 *
 * Return: pointer to byte or null
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}

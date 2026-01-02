#include "main.h"

/**
 * _strstr - find substring in string
 * @haystack: string to search
 * @needle: substring to find
 *
 * Return: pointer to substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	if (!needle[0])
		return (haystack);

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (haystack + i);
	}
	return (0);
}

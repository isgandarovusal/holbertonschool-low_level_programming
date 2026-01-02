#include "main.h"

/**
 * _strncpy - copies a string up to n bytes
 * @dest: destination buffer
 * @src: source string
 * @n: maximum number of bytes to copy
 *
 * Return: pointer to dest
 *
 * Description: Copies at most n bytes from src to dest.
 * If src is shorter than n, the remainder is padded with null bytes.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

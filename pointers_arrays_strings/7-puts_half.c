#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to print
 *
 * Description: Prints the second half of the string.
 * If length is odd, prints last n characters where n = (length + 1) / 2
 */
void puts_half(char *str)
{
	int len = 0;
	int i, n;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	i = len - n;

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}

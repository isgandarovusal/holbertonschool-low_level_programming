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
	int length = 0;
	int i, n, start;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		start = length / 2;
	else
	{
		n = (length + 1) / 2;
		start = length - n;
	}

	for (i = start; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}

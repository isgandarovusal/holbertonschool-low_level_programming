#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to print
 */
void puts_half(char *str)
{
	int len = 0;
	int start;

	while (str[len])
		len++;

	start = len / 2;
	if (len % 2 == 1)
		start++;

	while (str[start])
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}

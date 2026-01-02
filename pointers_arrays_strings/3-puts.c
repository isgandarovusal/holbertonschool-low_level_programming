#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: string to print
 *
 * Description: Prints each character of the string
 * using _putchar, followed by a new line.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

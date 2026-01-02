#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to print in reverse
 *
 * Description: First finds the length of the string,
 * then prints it in reverse order.
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
		length++;

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}

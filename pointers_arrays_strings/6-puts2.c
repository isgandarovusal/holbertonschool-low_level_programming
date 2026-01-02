#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to print
 *
 * Description: Prints first character, then every other
 * character (even indices: 0, 2, 4, ...), followed by new line.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

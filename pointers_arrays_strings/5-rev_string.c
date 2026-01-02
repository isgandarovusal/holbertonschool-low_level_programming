#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Description: Reverses the string in place by swapping
 * characters from the beginning and end.
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end;
	char temp;

	while (s[length] != '\0')
		length++;

	end = length - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}

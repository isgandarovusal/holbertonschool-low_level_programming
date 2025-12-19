#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: pointer to the string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
    /* Base case: if we reach the null terminator */
    if (*s == '\0')
    {
        _putchar('\n');
        return;
    }
    
    /* Print the current character */
    _putchar(*s);
    
    /* Recursive call with the next character */
    _puts_recursion(s + 1);
}

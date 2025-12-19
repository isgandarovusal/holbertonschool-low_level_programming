# Recursion Project

## Task 0: _puts_recursion

This project implements a recursive function that prints a string followed by a new line.

### Function Prototype
```c
void _puts_recursion(char *s);


























# Clone the correct repository
git clone https://github.com/holbertonschool/Betty.git

# Install it
cd Betty
sudo ./install.sh
cat > test.c << 'EOF'
#include "main.h"

/**
 * main - test _puts_recursion with different cases
 *
 * Return: Always 0.
 */
int main(void)
{
    _puts_recursion("Puts with recursion");
    _puts_recursion("Hello, World!");
    _puts_recursion("");  /* Empty string */
    _puts_recursion("A"); /* Single character */
    return (0);
}

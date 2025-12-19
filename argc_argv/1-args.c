#include <stdio.h>

/**
 * main - prints number of arguments passed to it
 * @argc: number of arguments
 * @argv: array of arguments (unused)
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv; /* explicitly ignore argv */
	printf("%d\n", argc - 1);
	return (0);
}

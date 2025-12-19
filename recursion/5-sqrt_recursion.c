#include "main.h"

/**
 * sqrt_helper - helper function for _sqrt_recursion
 * @n: number to find square root for
 * @i: iterator
 *
 * Return: square root of n, or -1 if no natural square root
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate square root for
 *
 * Return: square root of n, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}

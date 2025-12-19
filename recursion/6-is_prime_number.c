#include "main.h"

/**
 * prime_helper - helper function for is_prime_number
 * @n: number to check
 * @i: iterator
 *
 * Return: 1 if prime, 0 otherwise
 */
int prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_helper(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (prime_helper(n, 2));
}

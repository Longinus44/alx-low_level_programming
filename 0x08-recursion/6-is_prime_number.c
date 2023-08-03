#include "main.h"
int is_prime(int n, int i);
/**
 * is_prime_number - function that checks if a number is a prime number
 * @n: the number
 *
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, n - 1));
}

/**
 * is_prime - calculates for prime munbers
 * @n: number to evaluate
 * @i:the iterator
 *
 * Return: 0
 */
int is_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (is_prime(n, i - 1));
}

#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - If an integer is a prime number or not
 * @n: Number
 * Return: 1 if succes, 0 error
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - Calculates if a number is a prime
 * @n: Number to evaluate
 * @i: Iterator
 * Return: 1 if succes 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

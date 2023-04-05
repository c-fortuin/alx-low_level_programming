#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - Returns if number is a prime
 * @n: Number to be checked
 * Return: Int value
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - Check if the number is a prime
 * @n: Number
 * @i: Iteration times
 * Return: 1 for prime 0 for composite
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}

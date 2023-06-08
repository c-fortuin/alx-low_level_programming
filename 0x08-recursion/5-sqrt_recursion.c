#include "main.h"
/**
 * int _sqrt_recursion- function that returns the natural square root
 *  of a number
 *  @n: Input
 *  Return: -1 (Error) square root (Succes)
 */
int _sqrt(int n, int i);
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt- Calculates square root
 * @n: Input
 * @i: Iterator
 * Return: Square root
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

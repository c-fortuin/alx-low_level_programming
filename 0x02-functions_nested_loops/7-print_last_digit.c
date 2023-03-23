#include "main.h"
/**
 * print_last_digit - Prints last digit of a number
 * @n: Number to be treated
 * Return: Value of last digit of number
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
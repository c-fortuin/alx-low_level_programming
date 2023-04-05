#include "main.h"
/**
 * _pow_recursion - Returns x raised to the power of y
 * @x: Value to multiply
 * @y: Times to multiply
 * Return: Value multiplied y times
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

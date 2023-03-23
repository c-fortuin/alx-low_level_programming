#include "main.h"
/**
 * _isdigit - Checks for a digit
 * @x: Number to be checked
 * Return: 1 for character that is a digit 0 for anything else
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}

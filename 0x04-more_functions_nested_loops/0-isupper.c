#include "main.h"
/**
 * _isupper - Checks if character is uppercase
 * @x: Number to be checked
 * Return: 1 for uppercase 0 for anything else
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}

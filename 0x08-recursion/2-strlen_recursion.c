#include "main.h"
/**
 * _strlen_recursion - Calculate the lenght of a
 *@s: String
 *Return: Int value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}

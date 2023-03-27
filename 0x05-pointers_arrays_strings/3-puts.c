#include "main.h"
#include <stdio.h>
/**
 * _puts - Write a function that prints a string
 * @str: String to print
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

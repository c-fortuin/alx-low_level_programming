#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes c to stdout
 * @c: Character to print
 * Return: Success 1
 * Error: -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

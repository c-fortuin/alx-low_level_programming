#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes the character c to stdout
 * @c: Character
 * Return: 1 - success , -1 - Error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

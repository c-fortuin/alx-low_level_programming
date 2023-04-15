#include <unistd.h>
/**
 * _putchar - Writes the character c to stdout
 * @c: Character to print
 * Return: Success 1, error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

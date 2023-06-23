#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all- Prints anything
 * @format: List of arguments
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int i = 0;
	char *str, *sep = "";

	va_start(valist, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(valist, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(valist, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(valist, double));
					break;
				case 's':
					str = va_arg(valist, char*);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ",";
			i++;
		}
	}
	printf("\n");
	va_end(valist);
}

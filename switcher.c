#include "main.h"

/**
 * switcher - chooses the function to be called based on the format specifier
 * @format: a string containing the format specifier
 * @args: a va_list containing the arguments to be printed
 * Return: the number of characters printed
 */

int switcher(char format, va_list args)
{
	switch (format)
	{
	case 'c':
		return (print_char(args));
	case 's':
		return (print_string(args));
	case 'd':
	case 'i':
		return (print_integer(args));
	case '%':
		_putchar('%');
		return (1);
	default:
		_putchar('%');
		_putchar(format);
		return (2);
	}
}

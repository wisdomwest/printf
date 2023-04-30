#include "main.h"

/**
 * print_char - prints a character
 * @args: character to print
 * Return: the number of characters
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	if (c == ' ')
		return (-1);
	_putchar(c);
	return (1);
}

#include "main.h"
#include <stddef.h>

/**
 * print_string - prints a string
 * @args: the string to print
 * Return: the number of characters printed
 */
int print_string(va_list args)
{
	int count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		_printf("(null)");
		return (6);
	}
	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);
}

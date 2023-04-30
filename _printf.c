#include "main.h"

/**
 * _printf - implementation of printf function
 * @format: a string
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += switcher(*format, args);
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

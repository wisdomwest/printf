#include "main.h"

int print_integer_helper(int num);

/**
 * print_integer - prints an integer
 * @args: a va_list containing the integer to be printed
 * Return: the number of characters printed
 */
int print_integer(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;

	if (num == INT_MIN)
	{
		_putchar('-');
		count++;
		num = -(num + 1);
		count += print_integer_helper(num / 10);
		_putchar(num % 10 + '1');
		count++;
	}
	else if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	if (num / 10)
	{
		count += print_integer_helper(num / 10);
	}

	_putchar(num % 10 + '0');
	count++;

	return (count);
}

/**
 * print_integer_helper - recursively prints the digits of an integer
 * @num: an integer
 * Return: the number of characters printed
 */
int print_integer_helper(int num)
{
	int count = 0;

	if (num / 10)
		count += print_integer_helper(num / 10);
	_putchar(num % 10 + '0');
	count++;

	return (count);
}

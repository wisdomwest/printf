#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes a character
 * @c: the character to print
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

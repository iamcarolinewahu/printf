#include "main.h"

/**
 * print_char - prints a char.
 * @val: arguments.
 * Return: 1.
 */
int print_char(va_list val)
{
		return (_putchar(va_arg(val, int)));

}

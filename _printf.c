#include "main.h"

/**
 * _printf - prints a stream to standard output
 *
 * @format: The string to be used
 *
 * Return: number of characters printed to standard output
 */

int _printf(const char *format, ...)
{
	int res;

	va_list args;

	va_start(args, format);

	res = vfprintf(stdout, format, arg);

	va_end(args);
	return (res);
}

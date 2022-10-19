#include "main.h"


/**
 * printf - function to print to stdout
 *
 * @format: string being passed
 *
 * Return: numb of char to be printed
 */

int printf(const char *format, ...)
{
	va_list arg;
	int done;

	va_start(arg, format);

	done = vfprintf(stdout, format, arg);

	return (done);
}

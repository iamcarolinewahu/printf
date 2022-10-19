#include "main.h"


/**
 * printf - function to print to stdout
 * 
 * @format: string being passed
 * 
 * Return: numb of char to be printed
 */

int _printf(const char *format, ...)
{
	int res;

	va_list args;

	va_start(args, format);

	res = vfprintf(stdout, format, args);

	va_end(args);
	return (res);
}

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
	change_match m[] = {
		{"%c", print_char},  {"%s", print_string}, {"%%", print_percent}
	};

	int i = 0, j, len = 0;
	va_list args;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

loop:
	while (format[i] != '\0')
	{
		j = 3;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				goto loop;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}

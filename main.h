#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
<<<<<<< HEAD
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format- match the conversion specifiers for printf
 *
 * @id: type char pointer of specifier
 * @f: pointer to function for the conversion specifier
 */

typedef struct format
{
	char *type;
	int (*f)();
} fmt_t;

int _printf(const char *format, ...);
int print_op(const char *format, fmt_t *print_arr, va_list list);
int print_char(va_list val);
int print_string(va_list val);
int print_percent(void);
int _putchar(char c);
int _strlen(char *s);
int _strlenc(const char *s);

=======

int _printf(const char *format, ...);
>>>>>>> cba0b536070734e8e25b0bd2a5cc82927572315d

#endif

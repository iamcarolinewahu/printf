#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
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
	char *id;
	int (*f)();
} change_match;

int _printf(const char *format, ...);
int print_char(va_list val);
int print_string(va_list val);
int print_percent(void);
int _putchar(char c);
int _strlen(char *s);
int _strlenc(const char *s);


#endif

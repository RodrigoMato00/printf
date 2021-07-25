#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int print_char(va_list list, char *save);
int print_str(va_list args, char *save);
int print_percent(char a, char *save);

int print_decimal(va_list args, char *save);
int print_int(va_list args, char *save);

int _printf(const char *format, ...);
int _putchar(char c);

/**
 * struct datatype - Typedef for struct
 * @type: first member
 * @func: second member
 */
typedef struct datatype
{
	char *type;
	int (*func)(va_list list);
} data_t;

int functions(const char *format, data_t type[],  va_list list)

#endif

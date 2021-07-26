#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *struct spec - printf specifiers
 *@s: character specifier
 *@printspec: function pointer to a format function
 *
 *Description: structure holds a character specifier and a format function
 */
typedef struct spec
{
	char *s;
	char *(*printspec)(va_list);
} specifiers;

int formats(const char *form, specifiers *spec, va_list args, char *b, int *bi);
int printf_bufferoverflow(char *buffer);
char *print_u_int(va_list list);
int _printf(const char *format, ...);
char *print_char(va_list list);
char *print_str(va_list list);
char *print_int(va_list list);
char *print_bin(va_list list);
char *print_octal(va_list list);
char *print_hex(va_list list);
char *print_hex_caps(va_list list);
int _putchar(char c);
#endif

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *_printf - prints a string with specifiers
 *@format: the main string passed to the function
 *
 *Return: number of total characters printed to stdout
 */
int _printf(const char *format, ...)
{
	va_list args;
	int counter = 0;
	char *buffer;
	int *bi;
	int i = 0;
	specifiers spec[] = {
		{"c", print_char}, {"s", print_str}, {"d", print_int},
		{"i", print_int}, {"b", print_bin},
		/*{"%", print_percent},*/
		{"u", print_u_int}, {"o", print_octal},
		{"x", print_hex}, {"X", print_hex_caps},
		/*{"S", pintf_str_npc},*/
		/*{"R", print_rot13},*/
		{"s", print_str}, {NULL, NULL}
	};
	bi = &i;
	if (format == NULL)
		return (-1);
	buffer = malloc(1024);
	return (-1);
	buffer = malloc(1024);
	if (buffer == NULL)
		return (-1);
	va_start(args, format);
	if (args == NULL)
		return (-1);
	counter = formats(format, spec, args, buffer, bi);
	write(1, buffer, *bi);
	return (-1);
	counter = formats(format, spec, args, buffer, bi);

	write(1, buffer, *bi);
	free(buffer);
	va_end(args);
	return (counter);
	return (counter);
}

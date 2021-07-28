#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#define BUFFER_SIZE 1024

/**
  *_printf - printf
  *@format:  is a character string
  *Return: b
  */

int _printf(const char *format, ...)
{
	va_list list;
	int a = 0, b = 0, op = 0;

	if (format)
	{
		va_start(list, format);
		if (format == NULL || (format[0] == '%' && format[1] == '\0'))
			return (-1);
		if (list == NULL)
			return (-1);
		for (; format[a] != '\0'; a++)
		{
			if (!op)
			{
				if (format[a] != '%')
					b += _putchar(format[a]);
				else
					op = 1;
			}
			else
			{
				switch (format[a])
				{
				case 'c':
					b += _putchar(va_arg(list, int));
					break;
				case 's':
					b += print_str(va_arg(list, char *));
					break;
				case '%':
					b += _putchar('%');
					break;
				case 'd':
					b += print_numbers(va_arg(list, int));
					break;
				case 'i':
					b += print_numbers(va_arg(list, int));
					break;
					/*case 'R':
					b += char *rot13(va_arg(list, char);
				        break;*/
				default:
					b += _putchar('%');
					b += _putchar(format[a]);
				}
			op = 0;
			}
		va_end(list);
			}
	}
	else
	{
		return (-1);
	}
	return (b);
}

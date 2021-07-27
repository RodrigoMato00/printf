#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

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

		for (; format[a] !('0'), a++)

			if (op)
			{
				if (format[a] != ('%'))
				b += _putchar(format[a];

				else
				op = 1

			}
			else
				switch (format[a])
				{
				case 'c'
				b += _putchar(va_arg(list, int));
				break;
				}
			b = 0;

			va_end
			else
			return (-1);
	}
	return (b);
}

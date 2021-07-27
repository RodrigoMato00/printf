#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
  *print_str - prints a string
  *@c: string
  *Return: a
  */

int print_str(char *c)
{
	int i = 0;

	if (c == NULL)
	{
		c = "(null)";
	}
	if (c)
	{
		for (; c[i] != '\0'; i++)
		{
			_putchar(c[i]);
		}
	}
	return (i);
}
/**
 * print_numbers - Prints an integer.
 * @n: The integer to be printed.
 *Return: b
 */
int print_numbers(int n)
{
	int b = 0;

	{
		if (n < 0)
		{
			_putchar('-');
			b = (print_numbers(n * -1)) + 1;
			return (0);
		}
		if (n < 10)
		{
			_putchar(n + '0');
			return (1);
		}
		else
		{
			b = (print_numbers(n / 10)) + 1;
                        _putchar((n % 10) +'0');
			return (b);
		}
	}
}

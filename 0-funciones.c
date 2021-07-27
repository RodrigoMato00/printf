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
	int a = 0;

	if (c == NULL)
	{
	    c = "(null)";
	}

	if (c)
	{
		for (; c[a] != '\0'; a++)
		{
			_putchar(c[a]);
		}
	}
	return (a);
}

/**
 * print_int - Prints an integer.
 * @n: The integer to be printed.
 *Return: b
 */
int print_number(int n)
{
	int a = n;
	int b = 0;

	if (n)
	{
		if (n < 0)
		{
			b += _putchar('-');
			a = -a;
		}

		if ((b / 10) > 0)
			b += print_number(a / 10);
		b += _putchar((a % 10) + '0');
	}

	else
	{
		b += _putchar(n + '0');
	}

	return (b);
}

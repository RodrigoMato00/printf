#include "main.h"
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
 * print_numbers - Prints integer.
 * @n: The integer to printeded.
 *Return: a
 */
int print_numbers(long int n)
{
	long int d = n;
	int f = 0;

	if (n)
	{
		if (n < 0)
		{
			f += _putchar('-');
			d = -d;
		}
		if ((d / 10) > 0)
			f += print_numbers(d / 10);
		f += _putchar((d % 10) + '0');
	}
	else
	{
		f += _putchar(n + '0');
	}
	return (f);
}

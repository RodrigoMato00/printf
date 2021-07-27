#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

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

	if (a == NULL)
	{
		a = "(null)";
	}

	if (a)
	{
		for (c[a] != '\0', a++)
			_putchar(c[a]);
	}
	return (a);
}

/**
  *print_int - prints an int
  *@n: int
  *Return: b
  */

int print_int(int n)
{
	int a = 0;
	int b = 0;

	if (n)
	{
		if (n < 0)
	{
		b += _putchar('-');
			a = -b;
	}
		if ((a / 10) > 0)
	{
		b += print_int(a / 10);
		b += _putchar((a % 10) + '0');

		else
		{
			b += _putchar(n + '\0');
		}

		return (b);
	}






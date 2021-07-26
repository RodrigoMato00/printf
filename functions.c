#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *print_bin - prints an unsigned int as binary
 *@list: variadic argument list
 *
 *Return: number of characters printed to stdout
 */
char *print_bin(va_list list)
{
	int bin[32];
	char *bn;
	int i = 0, j = 0;
	unsigned int num = va_arg(list, unsigned int);

	bn = malloc(33);
	if (bn == NULL)
		return (NULL);
	if (num == 0)
	{
		bn[j] = (0 + '0');
		j++;
	}
	while (num != 0)
	{
		bin[i] = (num % 2);
		i++;
		num /= 2;
	}
	for (i = i - 1; i >= 0; i--)
	{
		bn[j] = (bin[i] + '0');
		j++;
	}
	bn[j] = '\0';
	return (bn);
}

/**
 *print_octal - converts from decimal to octal
 *@list: variadic list of arguments
 *
 *Return: number of characters printed to stdout
 */
char *print_octal(va_list list)
{
	int i = 0, j = 0;
	char oct[32];
	char *octal;
	unsigned int num = va_arg(list, unsigned int);

	octal = malloc(33);
	if (octal == NULL)
		return (NULL);
	if (num == 0)
	{
		oct[i] = (0 + '0');
		i++;
	}
	while (num != 0)
	{
		oct[i] = (num % 8) + '0';
		num /= 8;
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		octal[j] = oct[i];
		j++;
	}
	octal[j] = '\0';
	return (octal);
}

/**
 *print_hex - converts from decimal to hexadecimal
 *@list: variadic list of arguments
 *
 *Return: number of characters printed to stdout
 */
char *print_hex(va_list list)
{
	int i = 0, j = 0;
	char hex[32];
	char *hexa;
	char letters[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	unsigned int num = va_arg(list, unsigned int);

	hexa = malloc(33);
	if (hexa == NULL)
		return (NULL);
	if (num == 0)
	{
		hex[i] = (0 + '0');
		i++;
	}
	while (num != 0)
	{
		if ((num % 16) > 9)
			hex[i] = (letters[(num % 16) % 10]);
		else
			hex[i] = (num % 16) + '0';
		i++;
		num = num / 16;
	}
	for (i = i - 1; i >= 0; i--)
	{
		hexa[j] = hex[i];
		j++;
	}
	hexa[j] = '\0';
	return (hexa);
}

/**
 *print_hex_caps - converts from decimal to hexadecimal using capital letters
 *@list: variadic list of arguments
 *
 *Return: number of characters printed to stdout
 */
char *print_hex_caps(va_list list)
{
	int i = 0, j = 0;
	char hex[32];
	char *hexa;
	char letters[] = {'A', 'B', 'C', 'D', 'E', 'F'};
	unsigned int num = va_arg(list, unsigned int);

	hexa = malloc(33);
	if (hexa == NULL)
		return (NULL);
	if (num == 0)
	{
		hex[i] = (0 + '0');
		i++;
	}
	while (num != 0)
	{
		if ((num % 16) > 9)
			hex[i] = (letters[(num % 16) % 10]);
		else
			hex[i] = (num % 16) + '0';
		i++;
		num = num / 16;
	}

	for (i = i - 1; i >= 0; i--)
	{
		hexa[j] = hex[i];
		j++;
	}
	hexa[j] = '\0';
	return (hexa);
}

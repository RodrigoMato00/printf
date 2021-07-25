#include "holberton.h"

/**
 *print_char - print character
 *@list: blblblblblblb
 *@save: blblblblblblblb
 *Return: blblblblblblblblb
 */
int print_char(va_list list)
{
	char a;

	a = va_arg(list, int)
	_putchar(a);
	return(1);
}

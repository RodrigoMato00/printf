#include "holberton.h"

/**
 *print_char - print character
 *@list:
 *@save:
 *Return:
 */
int print_char(va_list list, char *save)
{
	char a = va_arg(args, int)

	if (a == '\0')
	{
		write(1, &a, 1);
		return(1);
	}
	_putchar(save, a);
	return (1);
}

/**
 *print_str -
 *
 *
 */
{

}

/**
 *print_percent - 

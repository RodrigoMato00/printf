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

int print_str(va_list args, char *save)
{


}

/**
 *print_percent - print percentage
 *@a:
 *@save:
 *Return:
 */

int print_percent(char a, char *save)
{
	a++;
	_putchar(save, "%");

	return(1);
}


#include "holberton.h"

/**
 *printnumbers -
 *
 *
 */
int printnumbers(int nu, char *save)
{
	int a;
	int b;
	int l;

	a = 1;
	b = nu;
	if (nu < 0)
	{
		a = a * -1;
		_putcharsave, '-')
		}
while (a > 9 || a < -9)
{
	a = a / 10;
	b = b * 10;
}

while (b > 9 || b < -9)
{
	_putchar(save, (nu / b) % 10 + '0');
	b = b / 10;
	l++;
}
if (nu < 0)
{
	_putchar(save, (nu % 10)  * -1 + '0');
	l++;
}
else
{
	_putchar(save, nu % 10 + '0');
	l++;
}
return (l);
}

/**
 *print_decimal -
 *
 *
 */
int print_decimal(va_list args, char *save)
{
	int num;
	int l;

	num = va_arg(args, int);
	l = printnumbers(nu, save);

	return (l);
}

/**
 *print_int - print integer
 *
 *
 *
 */
int print_int(va_list args, char *save)
{
	int n;
	int l;

	n = va_arg(args, int);
	l = printn(n, save)

		return (l);
}


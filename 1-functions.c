#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *pintf_str_npc - prints a string
 *@list: string to print
 *Return: 0
 */
int pintf_str_npc(va_list list)
{
	char *s_aux;
	int rem;
	int decnum;
	int i = 0;
	int cont = 0;
	int count = 0;
	int hexnum[100];

	s_aux = va_arg(list, char*);
	if (!s_aux)
		s_aux = "(null)";
	while (s_aux[count])
	{
		if ((s_aux[cont] > 0 && s_aux[cont] < 32) || (s_aux[cont] >= 127))
		{
			decnum = (int)s_aux[cont];
			while (decnum != 0)
			{
				rem = decnum % 16;
				if (rem < 10)
					rem = rem + 48;
				else
					rem = rem + 55;
				hexnum[i] = rem;
				i++;
				decnum = decnum / 16;
			}
			_putchar(92);
			_putchar('x');
			i = i - 1;
			if (i < 1)
				_putchar('0');
			for (; i >= 0; i--)
			{
				_putchar(hexnum[i]);
			}
			i = 0;
			count += 3;
		}
		else
			_putchar(s_aux[cont]);
		cont++;
	}
	return (cont + count);
}

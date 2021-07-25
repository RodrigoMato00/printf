nclude "holberton.h"

/**
 *print_str - print string
 *@str: string
 *@i: int
 *Return: blblblblblblblbl
 */
 int print_str(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	_putchar (str[i]);

	}

	return (i);

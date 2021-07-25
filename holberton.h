#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

<<<<<<< HEAD
int print_char(va_list list)
int print_str(va_list args, char *save);
=======
int print_char(va_list list, char *save);
int print_str(char *str);
>>>>>>> ef172a461cc8ad2c679732b2189ede6af1653142
int print_percent(char a, char *save);

int print_decimal(va_list args, char *save);
int print_int(va_list args, char *save);

int _printf(const char *format, ...);
int _putchar(char c);



#endif

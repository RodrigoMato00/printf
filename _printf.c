#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *_printf - prints a string with specifiers
 *@format: the main string passed to the function
 *
 *Return: number of total characters printed to stdout
 */
int _printf(const char *format, ...)
{
	va_list args;
	int counter = 0;
	char *buffer;
	int *bi;
	int i = 0;
	specifiers spec[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
		{"b", print_bin},
		/*{"%", print_percent},*/
		{"u", print_u_int},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_hex_caps},
		/*{"S", pintf_str_npc},*/
		{NULL, NULL}
	}; /* este struct que se ve arriba va a funcionar como selector de funciones, cada caracter que se ve es un placeholder, y dependiendo del mismo, la funcion que va a realizar para printear */

	bi = &i;
	if (format == NULL)
		return (-1); /* aca especificamos que si el format es null no haga nada(en vdd hace, sale con un -1 de status, que es error)*/
	buffer = malloc(1024); /*creamos el espacio de memoria suficiente (más que suficiente con 1024 xD) para el string que vamos a printear*/
	if (buffer == NULL) /* idem que si el format es NULL*/
		return (-1);
	va_start(args, format); /* inicializamos la lista de argumentos variables que va a recibir la funcion printf*/
	if (args == NULL)
		return (-1); /* aca estamos diciendo que si no hay argumentos, esto incluye el format, de nuevo, NULL, status exit with error*/
	counter = formats(format, spec, args, buffer, bi); /* aca usamos la funcion formats, que esta dentro de iterator.c, que basiscamente decide que funcion utilizar, a efectos de ver que printear, y esto se hace con el struct, y recorriendo chars que tiene para determinar la funcion*/
	write(1, buffer, *bi); /* llamada de muy low level a una funcion del sistema( una syscall) que se llama write, en donde se especifica lo que se escribe, y lo que pesa en bytes ( que se pasa con el puntero de bi)*/
	free(buffer); /*liberamos el espacio de memoria generado para buffer*/
	va_end(args); /*aca finalizamos el uso de las listas variadicas*/
	return (counter); 
}

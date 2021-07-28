###README
###*_printf*

This is the Readme file for our group project that consists on replicating various aspects of the stdio.h library function printf() which we are calling _printf(). The function write the output under the control of a format string that specifies how subsequent arguments (or arguments accessed via the variable-length argument facilities of **stdarg** are converted for output.
The format string is a character string, beginning and ending in its initial shift state, if any. The format string is composed of zero or more directives: ordinary characters **(not %)**, which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments. Each conversion specification is introduced by the character %, and ends with a conversion specifier.

#####SPECIFIERS CHARACTERES:

|   specifier    | character |
| ----------- | ----------- |
| c    | character       |
| s  | string of characters |
| %  |% followed by another % character will write a single % to the stream   |
| d-i    | signed decimal integer  |

#####Return 

Upon successful return, these function return the number of characters printed (excluding the null byte used to end output to strings). If an output error is encountered, a negative value is returned (-1).

#####Functions used

- >int _printf(const char *format, ...);
- >int _putchar(char c);
- >int print_numbers(long int n);
  
#####Task

#####0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life 
Write a function that produces output according to a format

The Prototype: 
>int _printf(const char *format, ...);

Returns: the number of characters printed (excluding the null byte used to end output to strings)

write output to stdout, the standard output stream

format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:

- c

- s

- %
  
#####1. Education is when you read the fine print. Experience is what you get if you don't

Handle the following conversion specifiers:
- d
- i

#####5. Nothing in fine print is ever good news
Use a local buffer of 1024 chars in order to call write as little as possible.



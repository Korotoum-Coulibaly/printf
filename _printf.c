#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: The format string is composed of zero or more directives
 *
 * Return: The number of characters printed(excluding the null byte
 * used to end output to strings)
 */
int _printf(const char *format, ...)
{
	int printed_chars;

	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"r", print_reversed},
		{"R", rot13},
		{"u", unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);

	return (printed_chars);
}

#include "main.h"

/**
 * print_char - prints character
 * @list: arguments list
 *
 * Return: character printed
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_string - prints string
 * @list: arguments list
 *
 * Return: string printed
 */
int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * print_percent - prints a percent symbol
 * @list: arguments list
 *
 * Return: character printed
 */
int print_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}

/**
 * print_integer - prints an integer
 * @list: arguments list
 *
 * Return: character printed
 */
int print_integer(va_list list)
{
	int num_length;

	num_length = print_number(list);
	return (num_length);
}

/**
 * unsigned_integer - prints unsigned integers
 * @list: argument list
 *
 * Return: count of number
 */
int unsigned_integer(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (print_unsgined_number(num));
	if (num < 1)
		return (-1);
	return (print_unsgined_number(num));
}

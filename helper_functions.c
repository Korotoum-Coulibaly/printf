#include "main.h"
#include <stdio.h>

/**
 * rev_strings - reverses a string in place
 * @s: string to reverse
 *
 * Return: pointer to a character
 */
char *rev_string(char *s)
{
	int len, head;
	char tmp;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);
	_memcpy(dest, s, len);
	for (head = 0; head < len; head++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
}

/**
 * write_base - sends characters to be written
 * @str: string
 */
void write_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}

/**
 * base_len - Calculates the length for octal number
 * @num: number
 * @base: base to be calculate
 *
 * Return: Result
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
		num = num / base;
	return (i);
}

/**
 * memcpy - copy memory area
 * @dest: destination
 * @src: source
 * @n: number to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

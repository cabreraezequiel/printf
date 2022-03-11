#include "main.h"

/**
 * print_char - prints char
 * c - character
 */

void print_char(va_list c)
{
	int ch = va_arg(c, int);

	_putchar(ch);
}

/**
 * print_str - prints string
 * s - string
 */

void print_str(va_list s)
{
	char *aux = va_arg(s, char *);
	int i = 0;

	if (aux == NULL)
		aux = "(nil)";
	
	for (i = 0; aux[i] != '\0'; i++)
	{
		_putchar(aux[i]);
	}
}

#include "main.h"

/**
 * print_r - main
 * @r: char
 * Return: strlen
 */

int print_r(va_list r)
{
	char *aux = va_arg(r, char *);
	int i = 0, cont = 0;

	if (aux == NULL)
	{
		aux = "(null)";
		return (0);
	}

	for (i = 0; aux[i] != '\0'; i++)
	{
	}
	cont = i;

	for (i = cont; i >= 0; i--)
	{
		_putchar(aux[i]);
	}
	return (cont);
}
